// rea decompile_all
// name: FUN_100490528
// address: 0x100490528
// body: available
// range: 0x100490528-0x10049072f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004906c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100490528(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_120 [80];
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar7 = param_1[4];
  uVar8 = param_1[6];
  uVar6 = uVar7 & uVar8 & 0x3000000000000000;
  puVar3 = param_1;
  if ((uVar6 != 0x3000000000000000) &&
     (auVar10._8_8_ = uVar7, auVar10._0_8_ = uVar8, auVar10 = NEON_ushl(auVar10,_DAT_100825d30,8),
     uVar9 = CONCAT44(auVar10._8_4_,auVar10._0_4_) & 0x100000006,
     (byte)((byte)uVar9 | (byte)(uVar9 >> 0x20)) == 3)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_b8 = param_1[3];
    lVar4 = param_1[2];
    local_90 = param_1[8];
    uStack_88 = param_1[9];
    local_d0 = uVar1;
    uStack_c8 = uVar2;
    local_c0 = lVar4;
    local_b0 = uVar7;
    uStack_a8 = param_1[5];
    local_a0 = uVar8;
    uStack_98 = param_1[7];
    FUN_100493064(&local_d0,auStack_120);
    puVar3 = (undefined8 *)0x0;
    FUN_10008f148(0,0,0);
    local_80 = uVar1;
    uStack_78 = uVar2;
    local_70 = lVar4;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_1004946d8();
  (*pcVar5)(&local_80,&DAT_1009c65b0,puVar3,param_3,param_4);
  lVar4 = local_70;
  uVar2 = uStack_78;
  uVar1 = local_80;
  if (unaff_x21 == 0) {
    if (local_70 != 0) {
      if (uVar6 == 0x3000000000000000) {
        FUN_100008184();
        _swift_retain(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        FUN_100008184();
        _swift_retain(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_10008f148(local_80,uStack_78,local_70);
      uStack_a8 = param_1[5];
      local_b0 = param_1[4];
      uStack_98 = param_1[7];
      local_a0 = param_1[6];
      uStack_88 = param_1[9];
      local_90 = param_1[8];
      uStack_c8 = param_1[1];
      local_d0 = *param_1;
      uStack_b8 = param_1[3];
      local_c0 = param_1[2];
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = lVar4;
      param_1[4] = 0x2000000000000000;
      param_1[6] = 0x1000000000000000;
      FUN_100040bb4(&local_d0,&DAT_100aa0b98,&DAT_10082dd80);
      return;
    }
    lVar4 = 0;
  }
  FUN_10008f148(local_80,uStack_78,lVar4);
                    /* WARNING: Read-only address (ram,0x000100825d30) is written */
  return;
}

