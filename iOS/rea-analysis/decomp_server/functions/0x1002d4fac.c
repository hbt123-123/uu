// rea decompile_all
// name: FUN_1002d4fac
// address: 0x1002d4fac
// body: available
// range: 0x1002d4fac-0x1002d53cf inclusive
// range: 0x1002d5410-0x1002d575f inclusive
// range: 0x1002d5774-0x1002d5897 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1002d4fac(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined1 *)param_1 = *param_2;
  lVar11 = *(long *)(param_2 + 8);
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_2 + 8);
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = lVar11;
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = lVar11;
    param_1[2] = uVar10;
    param_1[3] = uVar15;
    _swift_retain();
  }
  lVar11 = *(long *)(param_2 + 0x20);
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_2 + 0x20);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = lVar11;
    param_1[6] = *(undefined8 *)(param_2 + 0x30);
    lVar11 = *(long *)(param_2 + 0x50);
    if (lVar11 != 0) goto LAB_1002d5048;
LAB_1002d50a4:
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = uVar10;
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    lVar11 = *(long *)(param_2 + 0x78);
    if (lVar11 != 0) goto LAB_1002d506c;
LAB_1002d50c4:
    uVar10 = *(undefined8 *)(param_2 + 0x60);
    uVar16 = *(undefined8 *)(param_2 + 0x78);
    uVar15 = *(undefined8 *)(param_2 + 0x70);
    param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
    param_1[0xc] = uVar10;
    param_1[0xf] = uVar16;
    param_1[0xe] = uVar15;
    param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    uVar15 = *(undefined8 *)(param_2 + 0x30);
    param_1[4] = lVar11;
    param_1[5] = uVar10;
    param_1[6] = uVar15;
    _swift_retain();
    lVar11 = *(long *)(param_2 + 0x50);
    if (lVar11 == 0) goto LAB_1002d50a4;
LAB_1002d5048:
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    param_1[10] = lVar11;
    param_1[0xb] = uVar10;
    (*(code *)**(undefined8 **)(lVar11 + -8))(param_1 + 7,param_2 + 0x38);
    lVar11 = *(long *)(param_2 + 0x78);
    if (lVar11 == 0) goto LAB_1002d50c4;
LAB_1002d506c:
    uVar10 = *(undefined8 *)(param_2 + 0x80);
    param_1[0xf] = lVar11;
    param_1[0x10] = uVar10;
    (*(code *)**(undefined8 **)(lVar11 + -8))(param_1 + 0xc,param_2 + 0x60);
  }
  lVar11 = *(long *)(param_2 + 0x88);
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_2 + 0x88);
    param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
    param_1[0x11] = lVar11;
    param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x90);
    uVar15 = *(undefined8 *)(param_2 + 0x98);
    param_1[0x11] = lVar11;
    param_1[0x12] = uVar10;
    param_1[0x13] = uVar15;
    _swift_retain(uVar15);
  }
  lVar11 = *(long *)(param_2 + 0xa0);
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_2 + 0xa0);
    param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x14] = lVar11;
    param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0xa8);
    uVar15 = *(undefined8 *)(param_2 + 0xb0);
    param_1[0x14] = lVar11;
    param_1[0x15] = uVar10;
    param_1[0x16] = uVar15;
    _swift_retain(uVar15);
  }
  lVar11 = *(long *)(param_2 + 0xb8);
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_2 + 0xb8);
    param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
    param_1[0x17] = lVar11;
    param_1[0x19] = *(undefined8 *)(param_2 + 200);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0xc0);
    uVar15 = *(undefined8 *)(param_2 + 200);
    param_1[0x17] = lVar11;
    param_1[0x18] = uVar10;
    param_1[0x19] = uVar15;
    _swift_retain(uVar15);
  }
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0x1b) = param_2[0xd8];
  uVar10 = *(undefined8 *)(param_2 + 0xe0);
  param_1[0x1c] = uVar10;
  *(undefined1 *)(param_1 + 0x1d) = param_2[0xe8];
  lVar11 = *(long *)(param_2 + 0x108);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar10);
  if (lVar11 == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0xf0);
    uVar16 = *(undefined8 *)(param_2 + 0x108);
    uVar15 = *(undefined8 *)(param_2 + 0x100);
    param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
    param_1[0x1e] = uVar10;
    param_1[0x21] = uVar16;
    param_1[0x20] = uVar15;
    param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x110);
    param_1[0x21] = lVar11;
    param_1[0x22] = uVar10;
    (*(code *)**(undefined8 **)(lVar11 + -8))(param_1 + 0x1e,param_2 + 0xf0,lVar11);
  }
  lVar11 = *(long *)(param_2 + 0x130);
  if (lVar11 == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x118);
    uVar16 = *(undefined8 *)(param_2 + 0x130);
    uVar15 = *(undefined8 *)(param_2 + 0x128);
    param_1[0x24] = *(undefined8 *)(param_2 + 0x120);
    param_1[0x23] = uVar10;
    param_1[0x26] = uVar16;
    param_1[0x25] = uVar15;
    param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x138);
    param_1[0x26] = lVar11;
    param_1[0x27] = uVar10;
    (*(code *)**(undefined8 **)(lVar11 + -8))();
  }
  uVar15 = *(undefined8 *)(param_2 + 0x148);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x29] = uVar15;
  uVar10 = *(undefined8 *)(param_2 + 0x150);
  uVar16 = *(undefined8 *)(param_2 + 0x158);
  param_1[0x2a] = uVar10;
  param_1[0x2b] = uVar16;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c));
  puVar6 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x5c));
  param_1[0x2c] = *(undefined8 *)(param_2 + 0x160);
  lVar11 = 0;
  FUN_100277ad0();
  lVar13 = *(long *)(lVar11 + -8);
  pcVar12 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar16);
  puVar5 = puVar6;
  (*pcVar12)(puVar6,1,lVar11);
  if ((int)puVar5 != 0) {
    puVar7 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(puVar1,puVar6,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    goto LAB_1002d585c;
  }
  puVar5 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar11);
  switch((ulong)puVar5 & 0xffffffff) {
  case 0:
    uVar10 = *puVar6;
    _swift_errorRetain(uVar10);
    *puVar1 = uVar10;
    uVar10 = 0;
    break;
  case 1:
    uVar10 = *puVar6;
    _swift_errorRetain(uVar10);
    *puVar1 = uVar10;
    uVar10 = 1;
    break;
  case 2:
    uVar10 = *puVar6;
    _swift_errorRetain(uVar10);
    *puVar1 = uVar10;
    puVar7 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar4 = *(int *)(puVar7 + 0x30);
    lVar8 = 0;
    __s10Foundation3URLVMa();
    pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
    (*pcVar12)((long)puVar1 + (long)iVar4,(long)puVar6 + (long)iVar4,lVar8);
    (*pcVar12)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),
               (long)puVar6 + (long)*(int *)(puVar7 + 0x40),lVar8);
    uVar10 = 2;
    break;
  case 3:
    lVar8 = puVar6[3];
    puVar1[4] = puVar6[4];
    puVar1[3] = lVar8;
    (*(code *)**(undefined8 **)(lVar8 + -8))(puVar1,puVar6);
    uVar10 = 3;
    break;
  case 4:
    uVar10 = 0;
    FUN_100278198(0);
    _swift_getEnumCaseMultiPayload(puVar6,uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001002d53cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1002d53d0 +
              (ulong)*(ushort *)
                      ((long)&TargetResilientWitness_100818814.Requirement +
                      ((ulong)puVar6 & 0xffffffff) * 2 + 2) * 4))();
    return puVar6;
  case 5:
    uVar10 = *puVar6;
    FUN_10027c0e0(uVar10);
    *puVar1 = uVar10;
    uVar10 = 5;
    break;
  case 6:
    uVar10 = *puVar6;
    uVar15 = puVar6[1];
    uVar3 = *(undefined1 *)(puVar6 + 2);
    FUN_10027c0fc(uVar10,uVar15,uVar3);
    *puVar1 = uVar10;
    puVar1[1] = uVar15;
    *(undefined1 *)(puVar1 + 2) = uVar3;
    uVar10 = 6;
    break;
  case 7:
    uVar10 = *puVar6;
    _swift_errorRetain(uVar10);
    *puVar1 = uVar10;
    uVar10 = 7;
    break;
  case 8:
    uVar10 = *puVar6;
    _swift_errorRetain(uVar10);
    *puVar1 = uVar10;
    uVar10 = puVar6[1];
    _swift_errorRetain(uVar10);
    puVar1[1] = uVar10;
    uVar10 = 8;
    break;
  case 9:
    lVar8 = 0;
    FUN_1002782c4();
    puVar5 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,lVar8);
    iVar4 = (int)puVar5;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        lVar9 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar1,puVar6,lVar9);
        uVar10 = 0;
        goto LAB_1002d574c;
      }
      if (iVar4 == 1) {
        *puVar1 = *puVar6;
        _swift_bridgeObjectRetain();
        uVar10 = 1;
        goto LAB_1002d574c;
      }
LAB_1002d56dc:
      _memcpy(puVar1,puVar6,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
    }
    else {
      if (iVar4 == 2) {
        uVar10 = puVar6[1];
        *puVar1 = *puVar6;
        puVar1[1] = uVar10;
        uVar10 = puVar6[2];
        puVar1[2] = uVar10;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar10);
        uVar10 = 2;
      }
      else {
        if (iVar4 != 4) goto LAB_1002d56dc;
        uVar10 = *puVar6;
        _swift_errorRetain(uVar10);
        *puVar1 = uVar10;
        uVar10 = 4;
      }
LAB_1002d574c:
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,uVar10);
    }
    uVar10 = 9;
    break;
  case 10:
    lVar8 = 0;
    FUN_100278368();
    puVar5 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,lVar8);
    iVar4 = (int)puVar5;
    if (iVar4 < 3) {
      if (iVar4 == 0) {
        lVar9 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar1,puVar6,lVar9);
        uVar10 = 0;
        goto LAB_1002d5828;
      }
      if (iVar4 == 1) {
        lVar9 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar1,puVar6,lVar9);
        uVar10 = 1;
        goto LAB_1002d5828;
      }
      if (iVar4 == 2) {
        uVar10 = *puVar6;
        _swift_errorRetain(uVar10);
        *puVar1 = uVar10;
        uVar10 = 2;
        goto LAB_1002d5828;
      }
LAB_1002d57c4:
      _memcpy(puVar1,puVar6,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
    }
    else {
      if (iVar4 == 3) {
        uVar10 = *puVar6;
        _swift_errorRetain(uVar10);
        *puVar1 = uVar10;
        uVar10 = 3;
      }
      else if (iVar4 == 4) {
        uVar10 = *puVar6;
        _swift_errorRetain(uVar10);
        *puVar1 = uVar10;
        uVar10 = 4;
      }
      else {
        if (iVar4 != 5) goto LAB_1002d57c4;
        uVar10 = puVar6[1];
        *puVar1 = *puVar6;
        puVar1[1] = uVar10;
        _swift_bridgeObjectRetain();
        uVar10 = 5;
      }
LAB_1002d5828:
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,uVar10);
    }
    uVar10 = 10;
    break;
  case 0xb:
    uVar10 = *puVar6;
    uVar16 = puVar6[1];
    uVar15 = puVar6[2];
    uVar2 = puVar6[3];
    uVar14 = puVar6[4];
    uVar3 = *(undefined1 *)(puVar6 + 5);
    FUN_10027c10c(uVar10,uVar16,uVar15,uVar2,uVar14,uVar3);
    *puVar1 = uVar10;
    puVar1[1] = uVar16;
    puVar1[2] = uVar15;
    puVar1[3] = uVar2;
    puVar1[4] = uVar14;
    *(undefined1 *)(puVar1 + 5) = uVar3;
    uVar10 = 0xb;
    break;
  case 0xc:
    uVar10 = *puVar6;
    _swift_errorRetain(uVar10);
    *puVar1 = uVar10;
    uVar10 = 0xc;
    break;
  case 0xd:
    uVar10 = *puVar6;
    _swift_errorRetain(uVar10);
    *puVar1 = uVar10;
    uVar10 = 0xd;
    break;
  case 0xe:
    uVar10 = *puVar6;
    uVar15 = puVar6[1];
    FUN_100008184(uVar10,uVar15);
    *puVar1 = uVar10;
    puVar1[1] = uVar15;
    uVar10 = 0xe;
    break;
  default:
    _memcpy(puVar1,puVar6,*(size_t *)(lVar13 + 0x40));
    goto LAB_1002d5844;
  }
  _swift_storeEnumTagMultiPayload(puVar1,lVar11,uVar10);
LAB_1002d5844:
  (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar11);
LAB_1002d585c:
  iVar4 = *(int *)(param_3 + 100);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
       param_2[*(int *)(param_3 + 0x60)];
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)(param_2 + iVar4);
  _swift_bridgeObjectRetain();
  return param_1;
}

