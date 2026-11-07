// rea decompile_all
// name: FUN_10053dc18
// address: 0x10053dc18
// body: available
// range: 0x10053dc18-0x10053dd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053dc18(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  FUN_1000b142c(param_1,auStack_68);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  plVar2 = &local_88;
  _swift_dynamicCast(plVar2,auStack_68,puVar1,param_6,6);
  if ((int)plVar2 == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0xf000000000000000;
    lVar3 = 0;
  }
  else {
    lVar3 = local_88;
    if ((local_88 == param_2) && (lVar3 = param_2, (int)uStack_80 == param_3)) {
      FUN_1000094a4(param_4,param_5);
      uVar4 = (uint)param_4;
      (*param_7)(param_2,uStack_80,local_78,uStack_70);
      goto LAB_10053dcf0;
    }
  }
  (*param_7)(lVar3,uStack_80,local_78,uStack_70);
  uVar4 = 0;
LAB_10053dcf0:
  return uVar4 & 1;
}

