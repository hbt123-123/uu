// rea decompile_all
// name: FUN_1004510d0
// address: 0x1004510d0
// body: available
// range: 0x1004510d0-0x10045123f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004510d0(undefined4 *param_1)

{
  byte bVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong local_180;
  undefined1 auStack_170 [112];
  byte local_100;
  byte local_f8;
  byte local_f0;
  byte local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong uVar11;
  
  local_a0 = *(undefined8 *)(unaff_x20 + 0x90);
  local_88 = *(undefined8 *)(unaff_x20 + 0xa8);
  local_90 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xb8);
  local_80 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x58);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x50);
  local_d0 = *(long *)(unaff_x20 + 0x60);
  local_c0 = *(undefined8 *)(unaff_x20 + 0x70);
  local_b0 = *(undefined8 *)(unaff_x20 + 0x80);
  if (local_d0 == 0) {
    uVar2 = 0;
    local_c8._0_1_ = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    local_180 = 0;
    uVar9 = 0xc000000000000000;
    uStack_b8._0_1_ = 1;
    lVar8 = -0x2000000000000000;
    local_a8._0_1_ = 1;
    uStack_98._0_1_ = 1;
    local_100 = 1;
  }
  else {
    uStack_98._0_1_ = (byte)*(undefined8 *)(unaff_x20 + 0x98);
    local_a8._0_1_ = (byte)*(undefined8 *)(unaff_x20 + 0x88);
    uStack_b8._0_1_ = (byte)*(undefined8 *)(unaff_x20 + 0x78);
    local_c8._0_1_ = (byte)*(undefined8 *)(unaff_x20 + 0x68);
    uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((ulong)local_e0 >> 0x18),
                                             (uint6)(byte)((ulong)local_e0 >> 0x10) << 0x20) >> 0x10
                                   ),(ushort)(byte)local_e0) & 0xffffffffffffff01;
    uVar11 = CONCAT44((int)(uVar10 >> 0x20),
                      (uint)CONCAT12((char)((ulong)local_e0 >> 8),(short)uVar10)) &
             0xffffffffff01ffff;
    local_180 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
                0xff01ff01ffffffff;
    uVar2 = uStack_d8;
    uVar3 = local_c0;
    uVar4 = local_b0;
    uVar5 = local_a0;
    uVar6 = local_90;
    uVar7 = local_80;
    lVar8 = local_d0;
    uVar9 = uStack_78;
    local_100 = (byte)local_88;
  }
  bVar1 = (byte)local_c8 & 1;
  local_e8 = (byte)uStack_b8 & 1;
  local_f0 = (byte)local_a8 & 1;
  local_f8 = (byte)uStack_98 & 1;
  local_100 = local_100 & 1;
  local_c8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x78);
  local_a8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x98);
  FUN_10007f314(&local_e0,auStack_170,&DAT_100a9ffb0,&DAT_10082b118);
  *param_1 = CONCAT13((char)(local_180 >> 0x30),
                      CONCAT12((char)(local_180 >> 0x20),
                               CONCAT11((char)(local_180 >> 0x10),(char)local_180)));
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(long *)(param_1 + 4) = lVar8;
  *(byte *)(param_1 + 6) = bVar1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(byte *)(param_1 + 10) = local_e8;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(byte *)(param_1 + 0xe) = local_f0;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(byte *)(param_1 + 0x12) = local_f8;
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  *(byte *)(param_1 + 0x16) = local_100;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x1a) = uVar9;
  return;
}

