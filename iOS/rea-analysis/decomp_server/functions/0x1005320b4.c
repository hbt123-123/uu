// rea decompile_all
// name: FUN_1005320b4
// address: 0x1005320b4
// body: available
// range: 0x1005320b4-0x100532247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005320b4(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong local_68;
  long local_60;
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_1000efc08(auStack_58);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  FUN_1000b142c(auStack_58,auStack_a8);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar3 = &DAT_100aab448;
  FUN_100004bb4(&DAT_100aab448,&DAT_100837b00);
  puVar4 = &local_80;
  _swift_dynamicCast(puVar4,auStack_a8,puVar2,puVar3,0xe);
  lVar1 = local_60;
  uVar6 = local_68;
  if ((int)puVar4 == 0) {
    local_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    FUN_100040bb4(&local_80,&DAT_100aab450,&DAT_1008388b0);
    uVar6 = 0;
  }
  else {
    FUN_10003f030(&local_80,local_68);
    (**(code **)(lVar1 + 0x10))(uVar6,lVar1);
    FUN_10003f094(&local_80);
  }
  _swift_bridgeObjectRelease(param_2[8]);
  param_2[8] = uVar6;
  uVar7 = *param_2;
  uVar6 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar7;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
    FUN_100506f84(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
  }
  uVar6 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100506f84(uVar7,uVar6 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
  *(undefined1 *)(uVar7 + uVar6 + 0x20) = 0x7b;
  *param_2 = uVar7;
  *(undefined2 *)(param_2 + 1) = 0x100;
  FUN_10003f094(auStack_58);
  return;
}

