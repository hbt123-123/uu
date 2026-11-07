// rea decompile_all
// name: FUN_100079360
// address: 0x100079360
// body: available
// range: 0x100079360-0x100079417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100079360(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x20;
  long local_68;
  long lStack_60;
  undefined1 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar3 = unaff_x20[2];
  plVar5 = &local_68;
  local_68 = lVar1;
  lStack_60 = lVar2;
  local_58 = (char)lVar3;
  local_50 = param_1;
  local_48 = param_2;
  FUN_10000eba0(plVar5,param_1);
  _swift_getDynamicType();
  lVar4 = local_48;
  (*param_3)(lVar1,lVar2,(char)lVar3);
  plVar6 = &local_68;
  FUN_100001428();
  FUN_10007b0d8();
  _swift_allocError(&DAT_1000f7970,plVar6,0,0);
  *plVar6 = (long)plVar5;
  plVar6[1] = lVar4;
  *(undefined1 *)(plVar6 + 2) = 0;
  _swift_willThrow();
  return;
}

