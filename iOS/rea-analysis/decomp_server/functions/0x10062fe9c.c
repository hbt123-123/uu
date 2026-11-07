// rea decompile_all
// name: FUN_10062fe9c
// address: 0x10062fe9c
// body: available
// range: 0x10062fe9c-0x100630193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10062fe9c(size_t param_1,undefined *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  size_t sVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  size_t sVar13;
  ulong uVar14;
  size_t sVar15;
  long lVar16;
  size_t sVar17;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100630140);
    (*pcVar6)();
  }
  sVar17 = *(size_t *)(param_2 + 0x10);
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = (long)sVar17 / (long)param_1;
  }
  uVar8 = 0;
  FUN_100629690(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  bVar5 = 0;
  bVar7 = false;
  bVar1 = false;
  sVar13 = param_1;
  while( true ) {
    bVar2 = (long)sVar17 <= (long)sVar13;
    if ((long)param_1 < 1) {
      bVar2 = (long)sVar13 <= (long)sVar17;
    }
    if (bVar2) {
      if (((bool)(sVar13 != sVar17 | bVar5)) || (!bVar1 && bVar7)) {
        uVar14 = sVar17 - uVar3 * param_1;
        uVar10 = *(ulong *)(param_2 + 0x10);
        uVar3 = 0;
        if (uVar14 <= uVar10) {
          uVar3 = uVar10 - uVar14;
        }
        uVar14 = uVar8;
        if (uVar10 != uVar3) {
          uVar11 = 0;
          __ss28__ContiguousArrayStorageBaseCMa(0);
          puVar12 = param_2;
          _swift_unknownObjectRetain_n(param_2,2);
          _swift_bridgeObjectRetain();
          _swift_dynamicCastClass();
          if (puVar12 == (undefined *)0x0) {
            _swift_unknownObjectRelease(param_2);
            puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
          }
          lVar16 = *(long *)(puVar12 + 0x10);
          _swift_release();
          puVar12 = param_2;
          if (lVar16 == uVar10 - uVar3) {
            _swift_dynamicCastClass(param_2,uVar11);
            if (puVar12 == (undefined *)0x0) {
              _swift_unknownObjectRelease(param_2);
              puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
            }
          }
          else {
            _swift_unknownObjectRelease(param_2);
            thunk_FUN_100629d98(param_2,param_2 + 0x20,uVar3,uVar10 << 1 | 1);
          }
          uVar3 = *(ulong *)(uVar8 + 0x10);
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar3) {
            uVar14 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100629690(uVar14,uVar3 + 1,1,uVar8);
          }
          *(ulong *)(uVar14 + 0x10) = uVar3 + 1;
          *(undefined **)(uVar14 + uVar3 * 8 + 0x20) = puVar12;
          _swift_unknownObjectRelease(param_2);
        }
        return uVar14;
      }
      bVar5 = 1;
      sVar15 = sVar13;
    }
    else {
      bVar7 = SCARRY8(sVar13,param_1);
      bVar1 = !bVar7;
      sVar15 = (long)(sVar13 + param_1) >> 0x3f ^ 0x8000000000000000;
      if (!bVar7) {
        sVar15 = sVar13 + param_1;
      }
    }
    sVar4 = sVar13 - param_1;
    if (SBORROW8(sVar13,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10063012c);
      (*pcVar6)();
    }
    if ((long)sVar13 < (long)sVar4) break;
    if ((long)sVar17 < (long)sVar4) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100630134);
      (*pcVar6)();
    }
    if ((long)sVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100630138);
      (*pcVar6)();
    }
    if ((long)sVar17 < (long)sVar13) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10063013c);
      (*pcVar6)();
    }
    if (sVar17 == param_1) {
      _swift_bridgeObjectRetain(param_2);
      puVar12 = param_2;
    }
    else {
      puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (sVar13 != sVar4) {
        if (0 < (long)param_1) {
          puVar12 = &DAT_100ab7e50;
          FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
          _swift_allocObject();
          puVar9 = puVar12;
          _malloc_size();
          *(size_t *)(puVar12 + 0x10) = param_1;
          *(long *)(puVar12 + 0x18) = (long)puVar9 * 2 + -0x40;
        }
        _memcpy(puVar12 + 0x20,param_2 + 0x20 + sVar4,param_1);
      }
    }
    uVar14 = *(ulong *)(uVar8 + 0x10);
    uVar10 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_100629690(uVar10,uVar14 + 1,1,uVar8);
    }
    *(ulong *)(uVar10 + 0x10) = uVar14 + 1;
    *(undefined **)(uVar10 + uVar14 * 8 + 0x20) = puVar12;
    sVar13 = sVar15;
    uVar8 = uVar10;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100630130);
  (*pcVar6)();
}

