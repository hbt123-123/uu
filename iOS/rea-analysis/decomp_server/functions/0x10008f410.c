// rea decompile_all
// name: FUN_10008f410
// address: 0x10008f410
// body: available
// range: 0x10008f410-0x10008f6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008f410(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_170 [16];
  ulong local_160;
  ulong uStack_158;
  int *local_150;
  undefined4 *puStack_148;
  int local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  byte local_74;
  
  uVar5 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar5 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar5 != 0) && (bVar4 = *(byte *)(param_1 + 0x94), bVar4 != 3)) {
    local_138 = *(int *)(param_1 + 0x54);
    local_124 = *(undefined4 *)(param_1 + 0x58);
    local_128 = *(undefined4 *)(param_1 + 0x5c);
    local_12c = *(undefined4 *)(param_1 + 0x8c);
    local_13c = *(int *)(param_1 + 0x90);
    uVar1 = *(undefined4 *)(param_1 + 0x84);
    local_134 = *(undefined4 *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    local_130 = *(undefined4 *)(param_1 + 0x6c);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    local_90 = *(undefined8 *)(param_1 + 0x78);
    local_88 = *(undefined4 *)(param_1 + 0x80);
    uVar5 = param_2;
    local_b4 = local_138;
    uStack_b0 = local_124;
    local_ac = local_128;
    local_a8 = uVar8;
    local_a0 = uVar2;
    uStack_9c = local_130;
    local_98 = uVar3;
    uStack_84 = uVar1;
    local_80 = local_134;
    uStack_7c = local_12c;
    local_78 = local_13c;
    local_74 = bVar4;
    FUN_1001a11bc(param_2,param_3);
    plVar6 = *(long **)(uVar5 + 0x30);
    pcVar7 = *(code **)(*plVar6 + 0xb0);
    _swift_retain(plVar6);
    (*pcVar7)(&local_120);
    _swift_release(plVar6);
    _swift_release(uVar5);
    uStack_e0 = (undefined4)((ulong)uVar3 >> 0x20);
    local_e4 = CONCAT31((int3)((uint)(undefined4)local_120 >> 8),1);
    uStack_dc = (undefined4)((ulong)uVar8 >> 0x20);
    uStack_d0 = local_134;
    uStack_cc = (uint)uStack_108;
    if (bVar4 != 2) {
      uStack_cc = bVar4 & 1;
    }
    iStack_c8 = uStack_108._4_4_;
    if ((uStack_108._4_4_ < 1) && (iStack_c8 = local_13c, local_13c < 1)) {
      iStack_c8 = local_138;
    }
    local_c4 = local_124;
    uStack_c0 = local_128;
    uStack_bc = local_12c;
    uStack_b8 = local_130;
    uVar5 = param_2;
    uStack_d8 = uVar2;
    local_d4 = uVar1;
    FUN_1001a11bc(param_2,param_3);
    uStack_118 = CONCAT44(uStack_d8,uStack_dc);
    local_120 = CONCAT44(uStack_e0,local_e4);
    uStack_108 = CONCAT44(iStack_c8,uStack_cc);
    local_110 = CONCAT44(uStack_d0,local_d4);
    uStack_f8 = CONCAT44(uStack_b8,uStack_bc);
    uStack_100 = CONCAT44(uStack_c0,local_c4);
    plVar6 = *(long **)(uVar5 + 0x30);
    pcVar7 = *(code **)(*plVar6 + 0xb8);
    _swift_retain(plVar6);
    (*pcVar7)(&local_120);
    _swift_release(plVar6);
    _swift_release(uVar5);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_150 = &local_b4;
    puStack_148 = &local_e4;
    local_160 = param_2;
    uStack_158 = param_3;
    FUN_1003fb45c(FUN_10008fa94,auStack_170,0xd00000000000009f,0x800000010087e740,0xd00000000000001c
                  ,0x800000010087ead0,0x369,0);
  }
  return;
}

