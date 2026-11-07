// rea decompile_all
// name: FUN_10063d0d8
// address: 0x10063d0d8
// body: available
// range: 0x10063d0d8-0x10063d663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063d0d8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined1 *puVar14;
  code *pcVar15;
  ulong uVar16;
  
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_13;
  *(undefined8 *)(unaff_x20 + 0x18) = param_14;
  *(undefined8 *)(unaff_x20 + 0x20) = param_15;
  *(undefined8 *)(unaff_x20 + 0x28) = param_16;
  *(byte *)(unaff_x20 + 0x58) = param_11 & 1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_5;
  *(undefined8 *)(unaff_x20 + 0x68) = param_6;
  *(undefined8 *)(unaff_x20 + 0x70) = param_7;
  *(undefined8 *)(unaff_x20 + 0x78) = param_8;
  *(undefined8 *)(unaff_x20 + 0x80) = param_9;
  *(undefined **)(unaff_x20 + 0x88) = puVar7;
  *(ulong *)(unaff_x20 + 0x40) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x10;
  uVar5 = param_10;
  if ((param_11 & 1) != 0) {
    uVar5 = 0;
  }
  *(ulong *)(unaff_x20 + 0x50) = uVar5;
  _swift_bridgeObjectRetain(param_9);
  _swift_retain(param_14);
  _swift_retain(param_16);
  _swift_unknownObjectRetain(param_5);
  lVar4 = 0x10;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x10,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar4 + 0x10) = 0x10;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  pcVar15 = *(code **)(unaff_x20 + 0x20);
  if (pcVar15 == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d658);
    (*pcVar15)();
  }
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain();
  FUN_10004090c(pcVar15,uVar13);
  lVar11 = lVar4;
  (*pcVar15)(lVar4,(undefined8 *)(lVar4 + 0x20),0,0x21);
  _swift_bridgeObjectRelease(lVar4);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d65c);
    (*pcVar15)();
  }
  FUN_10007ed2c(pcVar15,uVar13);
  *(long *)(unaff_x20 + 0x90) = lVar11;
  lVar12 = lVar11;
  _swift_bridgeObjectRetain();
  FUN_10063d790();
  _swift_bridgeObjectRelease(lVar11);
  *(long *)(unaff_x20 + 0x98) = lVar12;
  lVar11 = lVar12;
  _swift_bridgeObjectRetain();
  FUN_10063d790();
  _swift_bridgeObjectRelease(lVar12);
  uVar16 = *(ulong *)(unaff_x20 + 0x88);
  uVar5 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x88) = uVar16;
  uVar9 = uVar16;
  if ((uVar5 & 1) == 0) {
    uVar9 = 0;
    FUN_100629690(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
    *(ulong *)(unaff_x20 + 0x88) = uVar9;
  }
  uVar5 = *(ulong *)(uVar9 + 0x10);
  uVar16 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar5) {
    uVar16 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_100629690(uVar16,uVar5 + 1,1,uVar9);
  }
  *(ulong *)(uVar16 + 0x10) = uVar5 + 1;
  *(long *)(uVar16 + uVar5 * 8 + 0x20) = lVar11;
  *(ulong *)(unaff_x20 + 0x88) = uVar16;
  uVar5 = 0x10;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x10,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(uVar5 + 0x10) = 0x10;
  *(undefined8 *)(uVar5 + 0x20) = 0;
  *(undefined8 *)(uVar5 + 0x28) = 0;
  lVar11 = (param_4 >> 1) - param_3;
  if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d618);
    (*pcVar15)();
  }
  if (SBORROW8(0x10,lVar11)) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d61c);
    (*pcVar15)();
  }
  if (0x10 < 0x10 - lVar11) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d620);
    (*pcVar15)();
  }
  _swift_unknownObjectRetain(param_1);
  FUN_10063e8ec();
  _swift_unknownObjectRelease(param_1);
  if ((long)param_10 < 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d624);
    (*pcVar15)();
  }
  if (0xff < param_10) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d628);
    (*pcVar15)();
  }
  uVar9 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar9 & 1) == 0) {
    FUN_1006541b8();
    uVar9 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    uVar9 = *(ulong *)(uVar5 + 0x10);
  }
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d640);
    (*pcVar15)();
  }
  puVar14 = (undefined1 *)(uVar5 + 0x20);
  *puVar14 = (char)((int)param_10 << 4);
  uVar16 = 0xf - lVar11;
  if (SBORROW8(0xf,lVar11)) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d644);
    (*pcVar15)();
  }
  if (uVar9 <= uVar16) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d648);
    (*pcVar15)();
  }
  puVar14[uVar16] = puVar14[uVar16] | 1;
  if (uVar9 < 0x10) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d64c);
    (*pcVar15)();
  }
  bVar1 = *(byte *)(uVar5 + 0x2f);
  *(byte *)(uVar5 + 0x2f) = bVar1 & 0xc0;
  pcVar15 = *(code **)(unaff_x20 + 0x20);
  if (pcVar15 == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d660);
    (*pcVar15)();
  }
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(uVar5);
  FUN_10004090c(pcVar15,uVar13);
  uVar16 = uVar5;
  (*pcVar15)(uVar5,puVar14,0,uVar9 << 1 | 1);
  _swift_bridgeObjectRelease(uVar5);
  if (uVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d664);
    (*pcVar15)();
  }
  _swift_bridgeObjectRelease(param_9);
  _swift_bridgeObjectRelease(lVar4);
  FUN_10007ed2c(pcVar15,uVar13);
  if (8 < *(ulong *)(uVar16 + 0x10)) {
    pbVar6 = (byte *)0x8;
    _swift_slowAlloc(8,0xffffffffffffffff);
    bVar2 = *(byte *)(uVar16 + 0x21);
    *pbVar6 = bVar2 ^ *(byte *)(uVar16 + 0x20);
    bVar3 = *(byte *)(uVar16 + 0x22);
    pbVar6[1] = bVar3 ^ bVar2;
    bVar2 = *(byte *)(uVar16 + 0x23);
    pbVar6[2] = bVar2 ^ bVar3;
    bVar3 = *(byte *)(uVar16 + 0x24);
    pbVar6[3] = bVar3 ^ bVar2;
    bVar2 = *(byte *)(uVar16 + 0x25);
    pbVar6[4] = bVar2 ^ bVar3;
    bVar3 = *(byte *)(uVar16 + 0x26);
    pbVar6[5] = bVar3 ^ bVar2;
    bVar2 = *(byte *)(uVar16 + 0x27);
    pbVar6[6] = bVar2 ^ bVar3;
    pbVar6[7] = *(byte *)(uVar16 + 0x28) ^ bVar2;
    puVar7 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_allocObject();
    puVar8 = puVar7;
    _malloc_size();
    *(undefined8 *)(puVar7 + 0x10) = 8;
    *(long *)(puVar7 + 0x18) = (long)puVar8 * 2 + -0x40;
    *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)pbVar6;
    _swift_slowDealloc(pbVar6,0xffffffffffffffff,0xffffffffffffffff);
    FUN_100628ae0(puVar7);
    lVar4 = 0x10;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x10,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(lVar4 + 0x10) = 0x10;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    uVar9 = (ulong)(bVar1 >> 3) & 7;
    if ((bVar1 & 7) == 0) {
      if (*(ulong *)(uVar16 + 0x10) < (uVar9 | 0x10)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d654);
        (*pcVar15)();
      }
      FUN_10063e8ec(uVar16,uVar16 + 0x20,uVar9,(uVar9 | 0x10) << 1 | 1,0,0x10);
      _swift_bridgeObjectRelease(uVar16);
    }
    else {
      uVar10 = *(ulong *)(uVar16 + 0x10);
      lVar11 = 0;
      if (uVar9 <= uVar10) {
        lVar11 = uVar10 - uVar9;
      }
      uVar9 = uVar9 | 0x20;
      lVar12 = 0x20;
      do {
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d5cc);
          (*pcVar15)();
        }
        if (uVar10 <= uVar9 - 0x1f) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d5d0);
          (*pcVar15)();
        }
        *(byte *)(lVar4 + lVar12) =
             (byte)((char *)(uVar16 + uVar9))[1] >> (ulong)(-(uint)bVar1 & 7) |
             *(char *)(uVar16 + uVar9) << (ulong)(bVar1 & 7);
        lVar11 = lVar11 + -1;
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x30);
      _swift_bridgeObjectRelease(uVar16);
    }
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(long *)(unaff_x20 + 0xa8) = lVar4;
    lVar4 = 0x10;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x10,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(lVar4 + 0x10) = 0x10;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    _swift_unknownObjectRelease(param_1);
    _swift_unknownObjectRelease(param_5);
    _swift_release(param_14);
    _swift_release(param_16);
    *(long *)(unaff_x20 + 0xb0) = lVar4;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10063d650);
  (*pcVar15)();
}

