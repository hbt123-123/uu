// rea decompile_all
// name: FUN_10053db00
// address: 0x10053db00
// body: available
// range: 0x10053db00-0x10053dc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053db00(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&local_a0;
  FUN_1000b142c(param_1,auStack_78);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_a0,auStack_78,puVar2,&DAT_1009d8428,6);
  uVar6 = uStack_88;
  uVar5 = local_90;
  uVar4 = uStack_98;
  uVar3 = local_a0;
  if (iVar1 == 0) {
    uStack_98 = 0xf000000000000000;
    local_a0 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    FUN_1000094a4(param_2,param_3,local_a0,uStack_98);
    if ((param_2 & 1) != 0) {
      FUN_1000094a4(param_4,param_5,uVar5,uVar6);
      uVar7 = (uint)param_4;
      FUN_1005417b8(uVar3,uVar4,uVar5,uVar6);
      goto LAB_10053dbf8;
    }
  }
  FUN_1005417b8(uVar3,uVar4,uVar5,uVar6);
  uVar7 = 0;
LAB_10053dbf8:
  return uVar7 & 1;
}

