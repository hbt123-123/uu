// rea decompile_all
// name: FUN_1000bab40
// address: 0x1000bab40
// body: available
// range: 0x1000bab40-0x1000baca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bab40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar8 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(param_2);
  uVar9 = 0;
  lVar10 = 0;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar10 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar7);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar7);
      uVar3 = *puVar1;
      uVar7 = puVar1[1];
      uStack_88 = param_1[5];
      local_90 = param_1[4];
      uStack_78 = param_1[7];
      uStack_80 = param_1[6];
      local_70 = param_1[8];
      uStack_a8 = param_1[1];
      local_b0 = *param_1;
      uStack_98 = param_1[3];
      uStack_a0 = param_1[2];
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar7);
      __sSS4hash4intoys6HasherVz_tF(&local_b0,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      __sSS4hash4intoys6HasherVz_tF(&local_b0,uVar3,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      __ss6HasherV9_finalizeSiyF();
      uVar9 = uVar7 ^ uVar9;
    }
    bVar6 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar6) break;
    if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
      _swift_release(param_2);
      __ss6HasherV8_combineyySuF(uVar9);
      return;
    }
    uVar11 = ((ulong *)(param_2 + 0x40))[lVar10];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000baca8);
  (*pcVar5)();
}

