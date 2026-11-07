// rea decompile_all
// name: FUN_1002414e0
// address: 0x1002414e0
// body: available
// range: 0x1002414e0-0x1002417a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002414e0(void)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = (undefined8 *)(unaff_x20 + _TtC6FCount3RC4::key);
  *puVar10 = 0xd000000000000014;
  puVar10[1] = 0x80000001008a5910;
  *(undefined1 *)(unaff_x20 + _TtC6FCount3RC4::I) = 0;
  *(undefined1 *)(unaff_x20 + _TtC6FCount3RC4::J) = 0;
  lVar4 = 0x100;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x100,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar4 + 0x10) = 0x100;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined8 *)(lVar4 + 0xb8) = 0;
  *(undefined8 *)(lVar4 + 0xb0) = 0;
  *(undefined8 *)(lVar4 + 200) = 0;
  *(undefined8 *)(lVar4 + 0xc0) = 0;
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar4 + 0xd0) = 0;
  *(undefined8 *)(lVar4 + 0xe8) = 0;
  *(undefined8 *)(lVar4 + 0xe0) = 0;
  *(undefined8 *)(lVar4 + 0xf8) = 0;
  *(undefined8 *)(lVar4 + 0xf0) = 0;
  *(undefined8 *)(lVar4 + 0x108) = 0;
  *(undefined8 *)(lVar4 + 0x100) = 0;
  *(undefined8 *)(lVar4 + 0x118) = 0;
  *(undefined8 *)(lVar4 + 0x110) = 0;
  *(long *)(unaff_x20 + _TtC6FCount3RC4::State) = lVar4;
  FUN_100241b14();
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  lVar4 = _TtC6FCount3RC4::State;
  uVar11 = *(ulong *)(IVar5 + _TtC6FCount3RC4::State);
  uVar7 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(IVar5 + lVar4) = uVar11;
  if ((uVar7 & 1) == 0) {
    FUN_100242634();
  }
  uVar7 = *(ulong *)(uVar11 + 0x10);
  if (uVar7 < 0x10) {
    uVar9 = 0;
  }
  else {
    uVar14 = uVar7;
    if (0xfe < uVar7) {
      uVar14 = 0xff;
    }
    uVar8 = uVar14 + 1 & 0xf;
    uVar9 = 0x10;
    if (uVar8 != 0) {
      uVar9 = uVar8;
    }
    uVar9 = (uVar14 + 1) - uVar9;
    uVar16 = 0xf0e0d0c0b0a0908;
    uVar15 = 0x706050403020100;
    puVar10 = (undefined8 *)(uVar11 + 0x20);
    uVar14 = uVar9;
    do {
      puVar10[1] = uVar16;
      *puVar10 = uVar15;
      uVar15 = CONCAT17((char)((ulong)uVar15 >> 0x38) + '\x10',
                        CONCAT16((char)((ulong)uVar15 >> 0x30) + '\x10',
                                 CONCAT15((char)((ulong)uVar15 >> 0x28) + '\x10',
                                          CONCAT14((char)((ulong)uVar15 >> 0x20) + '\x10',
                                                   CONCAT13((char)((ulong)uVar15 >> 0x18) + '\x10',
                                                            CONCAT12((char)((ulong)uVar15 >> 0x10) +
                                                                     '\x10',CONCAT11((char)((ulong)
                                                  uVar15 >> 8) + '\x10',(char)uVar15 + '\x10')))))))
      ;
      uVar16 = CONCAT17((char)((ulong)uVar16 >> 0x38) + '\x10',
                        CONCAT16((char)((ulong)uVar16 >> 0x30) + '\x10',
                                 CONCAT15((char)((ulong)uVar16 >> 0x28) + '\x10',
                                          CONCAT14((char)((ulong)uVar16 >> 0x20) + '\x10',
                                                   CONCAT13((char)((ulong)uVar16 >> 0x18) + '\x10',
                                                            CONCAT12((char)((ulong)uVar16 >> 0x10) +
                                                                     '\x10',CONCAT11((char)((ulong)
                                                  uVar16 >> 8) + '\x10',(char)uVar16 + '\x10')))))))
      ;
      uVar14 = uVar14 - 0x10;
      puVar10 = puVar10 + 2;
    } while (uVar14 != 0);
  }
  do {
    if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100241778);
      (*pcVar3)();
    }
    *(char *)(uVar11 + uVar9 + 0x20) = (char)uVar9;
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x100);
  *(ulong *)(IVar5 + lVar4) = uVar11;
  lVar6 = *(long *)(IVar5 + _TtC6FCount3RC4::key);
  lVar13 = ((long *)(IVar5 + _TtC6FCount3RC4::key))[1];
  _swift_bridgeObjectRetain(lVar13);
  FUN_100242668(lVar6,lVar13);
  _swift_bridgeObjectRelease(lVar13);
  uVar7 = *(ulong *)(lVar6 + 0x10);
  if (uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002417a4);
    (*pcVar3)();
  }
  bVar12 = 0;
  lVar13 = 0x20;
  do {
    uVar14 = lVar13 - 0x20;
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar14 / uVar7;
    }
    uVar11 = uVar14 - uVar11 * uVar7;
    if (*(ulong *)(lVar6 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10024177c);
      (*pcVar3)();
    }
    uVar9 = *(ulong *)(IVar5 + lVar4);
    if (*(ulong *)(uVar9 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100241780);
      (*pcVar3)();
    }
    cVar1 = *(char *)(uVar9 + lVar13);
    bVar12 = *(char *)(lVar6 + 0x20 + uVar11) + bVar12 + cVar1;
    uVar11 = (ulong)bVar12;
    if (*(ulong *)(uVar9 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100241784);
      (*pcVar3)();
    }
    uVar2 = *(undefined1 *)(uVar9 + 0x20 + uVar11);
    uVar8 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(IVar5 + lVar4) = uVar9;
    if ((uVar8 & 1) == 0) {
      FUN_100242634();
    }
    uVar8 = *(ulong *)(uVar9 + 0x10);
    if (uVar8 <= uVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100241788);
      (*pcVar3)();
    }
    *(undefined1 *)(uVar9 + lVar13) = uVar2;
    if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10024178c);
      (*pcVar3)();
    }
    *(char *)(uVar9 + 0x20 + uVar11) = cVar1;
    *(ulong *)(IVar5 + lVar4) = uVar9;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x120);
  _swift_bridgeObjectRelease(lVar6);
  return IVar5;
}

