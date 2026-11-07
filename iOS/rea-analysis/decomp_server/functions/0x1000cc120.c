// rea decompile_all
// name: FUN_1000cc120
// address: 0x1000cc120
// body: available
// range: 0x1000cc120-0x1000cc2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000cc120(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined *puVar11;
  ulong unaff_x22;
  ulong *puVar12;
  ulong uVar13;
  undefined1 auStack_1d0 [176];
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar11 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a763a8,&DAT_10080abd0);
    puVar7 = puVar11;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar12 = (ulong *)(param_1 + 0x20);
    while( true ) {
      puVar11 = puVar11 + -1;
      uStack_98 = puVar12[0x11];
      local_a0 = puVar12[0x10];
      uStack_88 = puVar12[0x13];
      local_90 = puVar12[0x12];
      uStack_78 = puVar12[0x15];
      local_80 = puVar12[0x14];
      uStack_d8 = puVar12[9];
      local_e0 = puVar12[8];
      uStack_c8 = puVar12[0xb];
      local_d0 = puVar12[10];
      uStack_b8 = puVar12[0xd];
      local_c0 = puVar12[0xc];
      uStack_a8 = puVar12[0xf];
      local_b0 = puVar12[0xe];
      uVar9 = puVar12[1];
      uVar13 = *puVar12;
      uStack_108 = puVar12[3];
      local_110 = puVar12[2];
      uStack_f8 = puVar12[5];
      local_100 = puVar12[4];
      uStack_e8 = puVar12[7];
      local_f0 = puVar12[6];
      local_120._0_1_ = (undefined1)uVar13;
      uVar2 = (undefined1)local_120;
      local_120._4_4_ = (uint)(uVar13 >> 0x20);
      uVar3 = local_120._4_4_;
      uStack_118._0_4_ = (undefined4)uVar9;
      uVar4 = (undefined4)uStack_118;
      uStack_118._4_4_ = (undefined4)(uVar9 >> 0x20);
      uVar5 = uStack_118._4_4_;
      unaff_x22 = unaff_x22 & 0xffffff00 | uVar13 & 0xff | (ulong)local_120._4_4_ << 0x20;
      uVar8 = unaff_x22;
      local_120 = uVar13;
      uStack_118 = uVar9;
      FUN_1001a2d90();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000cc2c8);
        (*pcVar6)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar9 + 0x40) = *(ulong *)(puVar7 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (undefined1 *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      *(uint *)(puVar1 + 4) = uVar3;
      *(undefined4 *)(puVar1 + 8) = uVar4;
      *(undefined4 *)(puVar1 + 0xc) = uVar5;
      puVar10 = (ulong *)(*(long *)(puVar7 + 0x38) + uVar8 * 0xa0);
      puVar10[1] = uStack_108;
      *puVar10 = local_110;
      puVar10[3] = uStack_f8;
      puVar10[2] = local_100;
      puVar10[9] = uStack_c8;
      puVar10[8] = local_d0;
      puVar10[0xb] = uStack_b8;
      puVar10[10] = local_c0;
      puVar10[5] = uStack_e8;
      puVar10[4] = local_f0;
      puVar10[7] = uStack_d8;
      puVar10[6] = local_e0;
      puVar10[0x11] = uStack_88;
      puVar10[0x10] = local_90;
      puVar10[0x13] = uStack_78;
      puVar10[0x12] = local_80;
      puVar10[0xd] = uStack_a8;
      puVar10[0xc] = local_b0;
      puVar10[0xf] = uStack_98;
      puVar10[0xe] = local_a0;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000cc2cc);
        (*pcVar6)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      if (puVar11 == (undefined *)0x0) break;
      FUN_10007f314(&local_120,auStack_1d0,&DAT_100a77610,&DAT_10080c270);
      puVar12 = puVar12 + 0x16;
    }
    FUN_10007f314(&local_120,auStack_1d0,&DAT_100a77610,&DAT_10080c270);
  }
  return puVar7;
}

