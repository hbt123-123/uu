// rea decompile_all
// name: FUN_100637e98
// address: 0x100637e98
// body: available
// range: 0x100637e98-0x10063818b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100637e98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  size_t sVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  size_t sVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  size_t sVar18;
  ulong uVar19;
  
  puVar15 = *(undefined **)(unaff_x20 + 0x90);
  uVar9 = *(ulong *)(puVar15 + 0x10);
  uVar16 = uVar9;
  if (0xf < uVar9) {
    uVar16 = 0x10;
  }
  _swift_bridgeObjectRetain(puVar15);
  uVar19 = 0;
  uVar12 = 0;
  while( true ) {
    if (uVar12 == uVar9) {
      _swift_bridgeObjectRelease(puVar15);
      if (uVar19 != 0) {
        if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100638188);
          (*pcVar3)();
        }
        if (*(ulong *)(*(long *)(unaff_x20 + 0x90) + 0x10) < uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10063818c);
          (*pcVar3)();
        }
        FUN_100634d84(0,uVar19);
      }
      _swift_unknownObjectRetain(param_1);
      return param_1;
    }
    uVar10 = *(ulong *)(puVar15 + 0x10);
    if ((long)uVar10 < (long)uVar12 || (long)uVar10 < (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100638178);
      (*pcVar3)();
    }
    uVar17 = uVar10;
    if ((0xf < uVar10 - uVar16) && (uVar17 = uVar16 + 0x10, SCARRY8(uVar16,0x10))) break;
    if ((long)uVar17 < (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10063817c);
      (*pcVar3)();
    }
    sVar18 = uVar16 - uVar12;
    if (uVar10 == sVar18) {
      _swift_bridgeObjectRetain(puVar15);
      puVar6 = puVar15;
    }
    else {
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar16 != uVar12) {
        if (0 < (long)sVar18) {
          puVar6 = &DAT_100ab7e50;
          FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
          _swift_allocObject();
          puVar8 = puVar6;
          _malloc_size();
          *(size_t *)(puVar6 + 0x10) = sVar18;
          *(long *)(puVar6 + 0x18) = (long)puVar8 * 2 + -0x40;
        }
        _memcpy(puVar6 + 0x20,puVar15 + uVar12 + 0x20,sVar18);
      }
    }
    _swift_bridgeObjectRetain(puVar15);
    if (*(ulong *)(puVar6 + 0x10) == 0) {
      _swift_release(puVar6);
      puVar6 = (undefined *)0x10;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (0x10,PTR___ss5UInt8VN_100995d40);
      *(undefined8 *)(puVar6 + 0x10) = 0x10;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0;
    }
    else {
      uVar12 = *(ulong *)(puVar6 + 0x10) & 0xf;
      if (uVar12 != 0) {
        sVar13 = 0x10 - uVar12;
        sVar5 = sVar13;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (sVar13,PTR___ss5UInt8VN_100995d40);
        *(size_t *)(sVar5 + 0x10) = sVar13;
        _bzero((void *)(sVar5 + 0x20),sVar13);
        FUN_100628ae0(sVar5);
      }
    }
    pcVar3 = *(code **)(unaff_x20 + 0x18);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar11 = *(long *)(unaff_x20 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
    _swift_unknownObjectRetain(uVar14);
    FUN_100636298(lVar11,uVar1,uVar2,puVar6);
    _swift_bridgeObjectRelease(puVar6);
    _swift_unknownObjectRelease(uVar14);
    lVar7 = lVar11;
    (*pcVar3)(lVar11,lVar11 + 0x20,0,*(long *)(lVar11 + 0x10) << 1 | 1);
    _swift_bridgeObjectRelease(lVar11);
    if (lVar7 == 0) {
      _swift_unknownObjectRetain(param_1);
      _swift_bridgeObjectRelease_n(puVar15,2);
      return param_1;
    }
    lVar11 = *(long *)(lVar7 + 0x10);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x60) = lVar7;
    *(long *)(unaff_x20 + 0x68) = lVar7 + 0x20;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(ulong *)(unaff_x20 + 0x78) = lVar11 << 1 | 1;
    _swift_bridgeObjectRelease(puVar15);
    _swift_unknownObjectRelease(uVar14);
    bVar4 = SCARRY8(uVar19,sVar18);
    uVar19 = uVar19 + sVar18;
    uVar12 = uVar16;
    uVar16 = uVar17;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100638180);
      (*pcVar3)();
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100638184);
  (*pcVar3)();
}

