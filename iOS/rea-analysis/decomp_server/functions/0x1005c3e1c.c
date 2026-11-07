// rea decompile_all
// name: FUN_1005c3e1c
// address: 0x1005c3e1c
// body: available
// range: 0x1005c3e1c-0x1005c401f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005c3e8c) */

void FUN_1005c3e1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(param_2);
  local_150 = 0;
  lVar14 = 0;
  while( true ) {
    while (uVar15 == 0) {
      bVar9 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1005c4020);
        (*pcVar8)();
      }
      if ((long)(uVar13 + 0x3f >> 6) <= lVar14) goto LAB_1005c3fe8;
      uVar15 = ((ulong *)(param_2 + 0x40))[lVar14];
    }
    uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar14 << 6;
    puVar10 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
    puVar12 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 0x30);
    uVar1 = *puVar10;
    lVar4 = puVar10[1];
    uVar2 = *puVar12;
    uVar5 = puVar12[1];
    uVar16 = puVar12[2];
    bVar7 = *(byte *)(puVar12 + 3);
    uVar3 = puVar12[4];
    uVar6 = puVar12[5];
    _swift_bridgeObjectRetain(lVar4);
    FUN_10051fe90(uVar2,uVar5,uVar16,(ulong)bVar7);
    FUN_100008184(uVar3,uVar6);
    if (lVar4 == 0) break;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    local_c0 = param_1[6];
    local_b0 = param_1[8];
    uStack_e8 = param_1[1];
    local_f0 = *param_1;
    uStack_d8 = param_1[3];
    local_e0 = param_1[2];
    local_a0 = uVar2;
    uStack_98 = uVar5;
    local_90 = uVar16;
    uStack_88 = (ulong)bVar7;
    local_80 = uVar3;
    uStack_78 = uVar6;
    __sSS4hash4intoys6HasherVz_tF(&local_f0,uVar1,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    uStack_118 = uStack_c8;
    local_120 = uStack_d0;
    uStack_108 = uStack_b8;
    uStack_110 = local_c0;
    local_100 = local_b0;
    uStack_138 = uStack_e8;
    local_140 = local_f0;
    uStack_128 = uStack_d8;
    uStack_130 = local_e0;
    FUN_1005b6884(&local_140);
    uVar15 = uVar15 - 1 & uVar15;
    puVar10 = &local_a0;
    FUN_10051ffe8();
    uStack_b8 = uStack_108;
    local_c0 = uStack_110;
    local_b0 = local_100;
    uStack_d8 = uStack_128;
    local_e0 = uStack_130;
    uStack_c8 = uStack_118;
    uStack_d0 = local_120;
    uStack_e8 = uStack_138;
    local_f0 = local_140;
    __ss6HasherV9_finalizeSiyF();
    local_150 = (ulong)puVar10 ^ local_150;
  }
LAB_1005c3fe8:
  _swift_release(param_2);
  __ss6HasherV8_combineyySuF(local_150);
  return;
}

