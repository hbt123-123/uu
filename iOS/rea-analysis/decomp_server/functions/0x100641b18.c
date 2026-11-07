// rea decompile_all
// name: FUN_100641b18
// address: 0x100641b18
// body: available
// range: 0x100641b18-0x100641ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong FUN_100641b18(long param_1)

{
  byte *pbVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  code *pcVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  long *plVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int iVar33;
  long lVar34;
  
  uVar29 = *(ulong *)(param_1 + 0x10);
  if (uVar29 == 0) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100641ef8);
    (*pcVar20)();
  }
  uVar21 = uVar29;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (uVar29,PTR___ss5UInt8VN_100995d40);
  *(ulong *)(uVar21 + 0x10) = uVar29;
  pbVar1 = (byte *)(uVar21 + 0x20);
  _bzero(pbVar1,uVar29);
  uVar3 = uVar29 - 1;
  if (uVar3 == 0) goto LAB_100641ecc;
  if ((uVar29 < 5) || (uVar21 < param_1 + uVar29 && param_1 + 0x20U < uVar21 + uVar29 + 0x1f)) {
    uVar24 = 0;
LAB_100641b9c:
    pcVar25 = (char *)(uVar24 + param_1 + 0x21);
    lVar27 = ~uVar24 + uVar29;
    pbVar22 = (byte *)(uVar24 + uVar21 + 0x20);
    do {
      cVar2 = pcVar25[-1];
      *pbVar22 = cVar2 << 1;
      if (*pcVar25 < '\0') {
        *pbVar22 = cVar2 << 1 | 1;
      }
      pcVar25 = pcVar25 + 1;
      pbVar22 = pbVar22 + 1;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  else if (uVar29 < 0x11) {
    uVar23 = 0;
LAB_100641df0:
    uVar24 = uVar3 & 0xfffffffffffffffc;
    lVar27 = uVar23 - uVar24;
    pbVar22 = (byte *)(uVar23 + uVar21 + 0x20);
    piVar28 = (int *)(uVar23 + param_1 + 0x21);
    do {
      uVar30 = *(undefined4 *)((long)piVar28 + -1);
      bVar4 = (char)uVar30 * '\x02';
      bVar5 = (char)((uint)uVar30 >> 8) * '\x02';
      bVar6 = (char)((uint)uVar30 >> 0x10) * '\x02';
      bVar7 = (char)((uint)uVar30 >> 0x18) * '\x02';
      *(uint *)pbVar22 = CONCAT13(bVar7,CONCAT12(bVar6,CONCAT11(bVar5,bVar4)));
      iVar33 = *piVar28;
      if ((char)iVar33 < '\0') {
        *pbVar22 = bVar4 | 1;
      }
      if ((char)((uint)iVar33 >> 8) < '\0') {
        pbVar22[1] = bVar5 | 1;
      }
      if ((char)((uint)iVar33 >> 0x10) < '\0') {
        pbVar22[2] = bVar6 | 1;
      }
      if (iVar33 < 0) {
        pbVar22[3] = bVar7 | 1;
      }
      pbVar22 = pbVar22 + 4;
      piVar28 = piVar28 + 1;
      lVar27 = lVar27 + 4;
    } while (lVar27 != 0);
    if (uVar3 != uVar24) goto LAB_100641b9c;
  }
  else {
    uVar24 = uVar3 & 0xfffffffffffffff0;
    plVar26 = (long *)(param_1 + 0x21);
    pbVar22 = pbVar1;
    uVar23 = uVar24;
    do {
      uVar32 = *(undefined8 *)((long)plVar26 + 7);
      uVar31 = *(undefined8 *)((long)plVar26 + -1);
      bVar4 = (char)uVar31 * '\x02';
      bVar5 = (char)((ulong)uVar31 >> 8) * '\x02';
      bVar6 = (char)((ulong)uVar31 >> 0x10) * '\x02';
      bVar7 = (char)((ulong)uVar31 >> 0x18) * '\x02';
      bVar8 = (char)((ulong)uVar31 >> 0x20) * '\x02';
      bVar9 = (char)((ulong)uVar31 >> 0x28) * '\x02';
      bVar10 = (char)((ulong)uVar31 >> 0x30) * '\x02';
      bVar11 = (char)((ulong)uVar31 >> 0x38) * '\x02';
      bVar12 = (char)uVar32 * '\x02';
      bVar13 = (char)((ulong)uVar32 >> 8) * '\x02';
      bVar14 = (char)((ulong)uVar32 >> 0x10) * '\x02';
      bVar15 = (char)((ulong)uVar32 >> 0x18) * '\x02';
      bVar16 = (char)((ulong)uVar32 >> 0x20) * '\x02';
      bVar17 = (char)((ulong)uVar32 >> 0x28) * '\x02';
      bVar18 = (char)((ulong)uVar32 >> 0x30) * '\x02';
      bVar19 = (char)((ulong)uVar32 >> 0x38) * '\x02';
      *(ulong *)(pbVar22 + 8) =
           CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,CONCAT12(
                                                  bVar14,CONCAT11(bVar13,bVar12)))))));
      *(ulong *)pbVar22 =
           CONCAT17(bVar11,CONCAT16(bVar10,CONCAT15(bVar9,CONCAT14(bVar8,CONCAT13(bVar7,CONCAT12(
                                                  bVar6,CONCAT11(bVar5,bVar4)))))));
      lVar34 = plVar26[1];
      lVar27 = *plVar26;
      if ((char)lVar27 < '\0') {
        *pbVar22 = bVar4 | 1;
      }
      if ((char)((ulong)lVar27 >> 8) < '\0') {
        pbVar22[1] = bVar5 | 1;
      }
      if ((char)((ulong)lVar27 >> 0x10) < '\0') {
        pbVar22[2] = bVar6 | 1;
      }
      if ((char)((ulong)lVar27 >> 0x18) < '\0') {
        pbVar22[3] = bVar7 | 1;
      }
      if ((char)((ulong)lVar27 >> 0x20) < '\0') {
        pbVar22[4] = bVar8 | 1;
      }
      if ((char)((ulong)lVar27 >> 0x28) < '\0') {
        pbVar22[5] = bVar9 | 1;
      }
      if ((char)((ulong)lVar27 >> 0x30) < '\0') {
        pbVar22[6] = bVar10 | 1;
      }
      if (lVar27 < 0) {
        pbVar22[7] = bVar11 | 1;
      }
      if ((char)lVar34 < '\0') {
        pbVar22[8] = bVar12 | 1;
      }
      if ((char)((ulong)lVar34 >> 8) < '\0') {
        pbVar22[9] = bVar13 | 1;
      }
      if ((char)((ulong)lVar34 >> 0x10) < '\0') {
        pbVar22[10] = bVar14 | 1;
      }
      if ((char)((ulong)lVar34 >> 0x18) < '\0') {
        pbVar22[0xb] = bVar15 | 1;
      }
      if ((char)((ulong)lVar34 >> 0x20) < '\0') {
        pbVar22[0xc] = bVar16 | 1;
      }
      if ((char)((ulong)lVar34 >> 0x28) < '\0') {
        pbVar22[0xd] = bVar17 | 1;
      }
      if ((char)((ulong)lVar34 >> 0x30) < '\0') {
        pbVar22[0xe] = bVar18 | 1;
      }
      if (lVar34 < 0) {
        pbVar22[0xf] = bVar19 | 1;
      }
      pbVar22 = pbVar22 + 0x10;
      plVar26 = plVar26 + 2;
      uVar23 = uVar23 - 0x10;
    } while (uVar23 != 0);
    if (uVar3 != uVar24) {
      uVar23 = uVar24;
      if ((uVar3 & 0xc) == 0) goto LAB_100641b9c;
      goto LAB_100641df0;
    }
  }
  if (*(ulong *)(uVar21 + 0x10) < uVar29) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100641ef4);
    (*pcVar20)();
  }
LAB_100641ecc:
  pbVar1[uVar3] = *(char *)(param_1 + uVar3 + 0x20) << 1;
  return uVar21;
}

