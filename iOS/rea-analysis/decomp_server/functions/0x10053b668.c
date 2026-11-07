// rea decompile_all
// name: FUN_10053b668
// address: 0x10053b668
// body: available
// range: 0x10053b668-0x10053b757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053b668(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&local_80;
  FUN_1000b142c(param_1,auStack_68);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_80,auStack_68,puVar2,&DAT_1009d2420,6);
  uVar6 = local_70;
  uVar5 = uStack_78;
  uVar4 = local_80;
  if (iVar1 == 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else if ((local_70 == param_4) || (uVar3 = local_70, FUN_1004f813c(), (uVar3 & 1) != 0)) {
    FUN_1000094a4(param_2,param_3,uVar4,uVar5);
    uVar7 = (uint)param_2;
    FUN_10008f148(uVar4,uVar5,uVar6);
    goto LAB_10053b73c;
  }
  FUN_10008f148(uVar4,uVar5,uVar6);
  uVar7 = 0;
LAB_10053b73c:
  return uVar7 & 1;
}

