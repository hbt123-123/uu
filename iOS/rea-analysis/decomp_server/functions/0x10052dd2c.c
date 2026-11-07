// rea decompile_all
// name: FUN_10052dd2c
// address: 0x10052dd2c
// body: available
// range: 0x10052dd2c-0x10052df87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052dd2c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_57;
  
  lVar10 = *(long *)(param_3 + -8);
  lVar9 = (long)&local_d0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    (**(code **)(lVar10 + 0x10))(lVar9,param_1,param_3);
    puVar1 = &DAT_100aaa138;
    FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
    puVar2 = &local_d0;
    _swift_dynamicCast(puVar2,lVar9,param_3,puVar1,6);
    if ((int)puVar2 == 0) {
      local_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      FUN_100040bb4(&local_d0,&DAT_100aaa140,&DAT_100837af0);
      if (((*(byte *)((long)unaff_x20 + 0x49) & 1) == 0) &&
         (FUN_10050f0c4(&local_78,param_3,param_4), local_57 != -1)) {
        FUN_10052cc80(local_78,uStack_70);
        FUN_100040bb4(&local_78,&DAT_100aab440,&DAT_1008387e0);
      }
      else {
        (**(code **)(param_4 + 0x28))(param_3,param_4);
        if (param_3 < 0) {
          uVar8 = *unaff_x20;
          uVar3 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar8;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_100506f84(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar8 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_100506f84(uVar8,uVar3 + 1,1,uVar4);
          }
          *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar8 + uVar3 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
        }
        FUN_10052badc();
      }
    }
    else {
      thunk_FUN_1000a0074(&local_d0,auStack_a0);
      FUN_10003f030(auStack_a0,local_88);
      uVar7 = 0x1000000;
      if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
        uVar7 = 0;
      }
      uVar6 = 0x10000;
      if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
        uVar6 = 0;
      }
      uVar5 = 0x100;
      if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
        uVar5 = 0;
      }
      (**(code **)(lStack_80 + 8))(uVar5 | (byte)unaff_x20[9] | uVar6 | uVar7,local_88,lStack_80);
      FUN_1004fa030();
      FUN_10003f094(auStack_a0);
    }
  }
  return;
}

