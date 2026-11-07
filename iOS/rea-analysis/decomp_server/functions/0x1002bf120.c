// rea decompile_all
// name: FUN_1002bf120
// address: 0x1002bf120
// body: available
// range: 0x1002bf120-0x1002bf3ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002bf120(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong local_138;
  ulong uStack_130;
  undefined1 auStack_128 [40];
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
  
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar14 != (undefined *)0x0) {
    puVar7 = &DAT_100a83908;
    FUN_100004bb4(&DAT_100a83908,&DAT_100818fd0);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar14,puVar7);
    puVar7 = puVar14;
  }
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar10 = 0;
  while( true ) {
    while (puVar14 = PTR___sSSN_1009957f8, uVar15 == 0) {
      bVar6 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002bf3e8);
        (*pcVar5)();
      }
      if ((long)(uVar13 + 0x3f >> 6) <= lVar10) {
        _swift_release(param_1);
        return puVar7;
      }
      uVar15 = ((ulong *)(param_1 + 0x40))[lVar10];
    }
    uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar10 << 6;
    lVar1 = *(long *)(param_1 + 0x38);
    FUN_100082260(*(long *)(param_1 + 0x30) + uVar11 * 0x28,&local_b0);
    FUN_10003e8bc(lVar1 + uVar11 * 0x20,&uStack_88);
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    local_c0 = local_70;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    FUN_100082260(&local_100,auStack_128);
    puVar8 = &local_138;
    _swift_dynamicCast(puVar8,auStack_128,PTR___ss11AnyHashableVN_100995ad0,puVar14,6);
    uVar3 = uStack_130;
    uVar11 = local_138;
    if ((int)puVar8 == 0) break;
    FUN_10003e8bc(&uStack_d8,auStack_128);
    FUN_100040bb4(&local_100,&DAT_100a83978,&DAT_100818158);
    puVar8 = &local_138;
    _swift_dynamicCast(puVar8,auStack_128,PTR___sypN_100995e88 + 8,puVar14,6);
    uVar4 = uStack_130;
    uVar2 = local_138;
    if (((ulong)puVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar3);
      goto LAB_1002bf3a8;
    }
    uVar15 = uVar15 - 1 & uVar15;
    uVar9 = uVar11;
    uVar12 = uVar3;
    FUN_1001a2c70();
    if ((uVar12 & 1) == 0) {
      if (*(ulong *)(puVar7 + 0x18) <= *(ulong *)(puVar7 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002bf3ec);
        (*pcVar5)();
      }
      uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar12 + 0x40) = *(ulong *)(puVar7 + uVar12 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar8 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
      *puVar8 = uVar11;
      puVar8[1] = uVar3;
      puVar8 = (ulong *)(*(long *)(puVar7 + 0x38) + uVar9 * 0x10);
      *puVar8 = uVar2;
      puVar8[1] = uVar4;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002bf3f0);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
    }
    else {
      puVar8 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
      uVar12 = puVar8[1];
      *puVar8 = uVar11;
      puVar8[1] = uVar3;
      _swift_bridgeObjectRelease(uVar12);
      puVar8 = (ulong *)(*(long *)(puVar7 + 0x38) + uVar9 * 0x10);
      uVar11 = puVar8[1];
      *puVar8 = uVar2;
      puVar8[1] = uVar4;
      _swift_bridgeObjectRelease(uVar11);
    }
  }
  FUN_100040bb4(&local_100,&DAT_100a83978,&DAT_100818158);
LAB_1002bf3a8:
  local_138 = 0;
  uStack_130 = 0;
  _swift_release(puVar7);
  _swift_release(param_1);
  return (undefined *)0x0;
}

