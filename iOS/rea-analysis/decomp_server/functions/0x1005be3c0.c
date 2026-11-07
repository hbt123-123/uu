// rea decompile_all
// name: FUN_1005be3c0
// address: 0x1005be3c0
// body: available
// range: 0x1005be3c0-0x1005be63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005be3c0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  lVar17 = 0;
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    plVar12 = (long *)(param_1 + 0x20 + lVar17 * 0x38);
    lVar1 = *plVar12;
    lVar3 = plVar12[1];
    uVar2 = plVar12[2];
    lVar13 = plVar12[3];
    lVar15 = plVar12[4];
    lVar8 = plVar12[5];
    bVar4 = *(byte *)((long)plVar12 + 0x2c);
    lVar9 = plVar12[6];
    bVar5 = *(byte *)((long)plVar12 + 0x34);
    cVar6 = *(char *)((long)plVar12 + 0x35);
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    local_c0 = local_70;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    lVar14 = *(long *)(lVar1 + 0x10);
    if (lVar14 != 0) {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + 0x10));
      puVar16 = (undefined4 *)(lVar1 + 0x20);
      do {
        __ss6HasherV8_combineyys6UInt32VF(*puVar16);
        lVar14 = lVar14 + -1;
        puVar16 = puVar16 + 1;
      } while (lVar14 != 0);
    }
    if (lVar15 == 0) {
      _swift_bridgeObjectRetain(lVar1);
      FUN_100008184(lVar3,uVar2);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      _swift_bridgeObjectRetain(lVar1);
      FUN_100008184(lVar3,uVar2);
      _swift_bridgeObjectRetain(lVar15);
      __sSS4hash4intoys6HasherVz_tF(&local_100,lVar13,lVar15);
    }
    if ((bVar4 & 1) == 0) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar8);
    }
    if ((bVar5 & 1) == 0) {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar9);
    }
    if (cVar6 != '\x03') {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyySuF(cVar6);
    }
    uVar7 = (uint)(uVar2 >> 0x20);
    uVar10 = uVar7 >> 0x1e;
    if (uVar7 >> 0x1e < 2) {
      if (uVar10 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_1005be5b4;
      }
      else {
        lVar13 = (long)(int)lVar3;
        lVar14 = lVar3 >> 0x20;
LAB_1005be59c:
        if (lVar13 == lVar14) goto LAB_1005be5b4;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_100,lVar3,uVar2);
    }
    else if (uVar10 == 2) {
      lVar13 = *(long *)(lVar3 + 0x10);
      lVar14 = *(long *)(lVar3 + 0x18);
      goto LAB_1005be59c;
    }
LAB_1005be5b4:
    lVar17 = lVar17 + 1;
    _swift_bridgeObjectRelease(lVar1);
    FUN_100006cdc(lVar3,uVar2);
    _swift_bridgeObjectRelease(lVar15);
    if (lVar17 == lVar11) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = local_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = local_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = local_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    local_70 = local_c0;
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}

