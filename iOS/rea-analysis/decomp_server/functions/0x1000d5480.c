// rea decompile_all
// name: FUN_1000d5480
// address: 0x1000d5480
// body: available
// range: 0x1000d5480-0x1000d558b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d5588 to 0x1000d6184 FUN_1000d6184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d5480(code *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *local_b0;
  long lStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 local_8f;
  long *local_88;
  long lStack_80;
  long *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  
  lVar1 = param_3[3];
  FUN_10003f030();
  plVar2 = *(long **)(*param_3 + 0x38);
  if ((plVar2 == param_4 && *(long *)(*param_3 + 0x40) == param_5) ||
     (param_3 = param_4, lVar1 = param_5,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     ((ulong)param_3 & 1) != 0)) {
    FUN_1000ce104();
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    FUN_1000d6df8(param_4,param_5);
    FUN_1000ce93c(&local_b0);
    _swift_bridgeObjectRelease(param_5);
    param_3 = local_b0;
    lVar1 = lStack_a8;
    plVar2 = local_a0;
    uVar3 = uStack_98;
    uVar4 = local_90;
    uVar5 = local_8f;
  }
  local_88 = param_3;
  lStack_80 = lVar1;
  local_78 = plVar2;
  uStack_70 = uVar3;
  local_68 = uVar4;
  local_67 = uVar5;
  (*param_1)(&local_88);
  FUN_1000d6184(param_3,lVar1,plVar2,uVar3,uVar4,uVar5);
  return;
}

