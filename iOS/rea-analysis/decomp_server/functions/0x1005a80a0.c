// rea decompile_all
// name: FUN_1005a80a0
// address: 0x1005a80a0
// body: available
// range: 0x1005a80a0-0x1005a8323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a80a0(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar8 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *puVar6 = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar5 = puVar2;
  puVar4 = (undefined8 *)(unaff_x20 + 0x78);
  *puVar4 = puVar2;
  puVar3 = (undefined1 *)(unaff_x20 + 0x80);
  *puVar3 = 3;
  _swift_beginAccess(param_1 + 0x10,auStack_118,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar8,auStack_130,1,0);
  *puVar8 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
  _swift_beginAccess(param_1 + 0x20,auStack_148,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar10,auStack_160,1,0);
  *puVar10 = uVar9;
  _swift_beginAccess(param_1 + 0x28,auStack_178,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  local_e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = *(undefined8 *)(param_1 + 0x58);
  local_c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x30);
  local_100 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(puVar6,auStack_190,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x50);
  local_90 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x30);
  local_b0 = *puVar6;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x48) = local_e0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_d0;
  local_70 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = local_c0;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_f8;
  *puVar6 = local_100;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  FUN_10007f314(&local_100,auStack_1d8,&DAT_100aab4b8,&DAT_100837c28);
  FUN_100040bb4(&local_b0,&DAT_100aab4b8,&DAT_100837c28);
  _swift_beginAccess(param_1 + 0x70,auStack_1d8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  _swift_beginAccess(puVar5,auStack_1f0,1,0);
  uVar7 = *puVar5;
  *puVar5 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(param_1 + 0x78,auStack_208,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  _swift_beginAccess(puVar4,auStack_220,1,0);
  uVar7 = *puVar4;
  *puVar4 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(param_1 + 0x80,auStack_238,0,0);
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  _swift_beginAccess(puVar3,auStack_250,1,0);
  *puVar3 = uVar1;
  return;
}

