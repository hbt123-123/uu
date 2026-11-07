// rea decompile_all
// name: FUN_1000d7cdc
// address: 0x1000d7cdc
// body: available
// range: 0x1000d7cdc-0x1000d7e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000d7cdc(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar11 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_3 + 0x38);
  _swift_bridgeObjectRetain(param_3);
  lVar12 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar3 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_3 + 0x30) +
               (lVar12 << 10 | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 4));
      local_70 = *puVar1;
      uVar2 = puVar1[1];
      uStack_68 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      (*param_1)(&local_80,&local_70);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar8);
        _swift_release(param_3);
        _swift_bridgeObjectRelease(uVar2);
        return puVar8;
      }
      _swift_bridgeObjectRelease(uVar2);
      lVar4 = local_78;
      uVar2 = local_80;
      if (local_78 != 0) {
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar8;
        if (((ulong)puVar7 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_100033898(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar3 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_100033898(puVar8,uVar3 + 1,1,puVar9);
        }
        *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x20) = uVar2;
        *(long *)(puVar8 + uVar3 * 0x10 + 0x28) = lVar4;
      }
    }
    bVar6 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar6) break;
    if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
      _swift_release(param_3);
      return puVar8;
    }
    uVar11 = ((ulong *)(param_3 + 0x38))[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000d7e98);
  (*pcVar5)();
}

