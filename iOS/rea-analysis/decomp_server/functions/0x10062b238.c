// rea decompile_all
// name: FUN_10062b238
// address: 0x10062b238
// body: available
// range: 0x10062b238-0x10062b9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062b238(undefined *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  code *pcVar34;
  uint *puVar35;
  uint *puVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  bool bVar48;
  ulong uVar49;
  ulong uVar50;
  uint uVar51;
  long unaff_x20;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  
  lVar52 = *(long *)(unaff_x20 + 0x58);
  lVar41 = *(long *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,lVar52);
  (**(code **)(lVar41 + 8))(lVar52,lVar41);
  uVar54 = param_4 >> 1;
  if (((uint)lVar52 >> 2 & 1) != 0) {
    if (SBORROW8(uVar54,param_3)) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b994);
      (*pcVar34)();
    }
    if (uVar54 - param_3 != 0x10) {
      if ((param_4 & 1) != 0) {
        uVar38 = 0;
        __ss28__ContiguousArrayStorageBaseCMa(0);
        puVar39 = param_1;
        _swift_unknownObjectRetain_n(param_1,2);
        _swift_dynamicCastClass();
        if (puVar39 == (undefined *)0x0) {
          _swift_unknownObjectRelease(param_1);
          puVar39 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        lVar52 = *(long *)(puVar39 + 0x10);
        _swift_release();
        if (lVar52 == uVar54 - param_3) {
          puVar39 = param_1;
          _swift_dynamicCastClass(param_1,uVar38);
          if (puVar39 != (undefined *)0x0) {
            return;
          }
          _swift_unknownObjectRelease(param_1);
          return;
        }
        _swift_unknownObjectRelease();
      }
      thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
      return;
    }
  }
  uVar53 = *(ulong *)(unaff_x20 + 0x10);
  FUN_10062bacc();
  if ((long)uVar54 <= param_3) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b950);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 1) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b954);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 2) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b958);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 3) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b95c);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 4) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b960);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 5) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b964);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 6) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b968);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 7) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b96c);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 8) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b970);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 9) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b974);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 10) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b978);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 0xb) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b97c);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 0xc) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b980);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 0xd) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b984);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 0xe) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b988);
    (*pcVar34)();
  }
  if ((long)uVar54 <= param_3 + 0xf) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b98c);
    (*pcVar34)();
  }
  uVar18 = *(undefined1 *)(param_2 + param_3);
  uVar19 = *(undefined1 *)(param_2 + param_3 + 1);
  uVar20 = *(undefined1 *)(param_2 + param_3 + 2);
  uVar21 = *(undefined1 *)(param_2 + param_3 + 3);
  uVar22 = *(undefined1 *)(param_2 + param_3 + 4);
  uVar23 = *(undefined1 *)(param_2 + param_3 + 5);
  uVar24 = *(undefined1 *)(param_2 + param_3 + 6);
  uVar25 = *(undefined1 *)(param_2 + param_3 + 7);
  uVar26 = *(undefined1 *)(param_2 + param_3 + 8);
  uVar27 = *(undefined1 *)(param_2 + param_3 + 9);
  uVar28 = *(undefined1 *)(param_2 + param_3 + 10);
  uVar29 = *(undefined1 *)(param_2 + param_3 + 0xb);
  uVar30 = *(undefined1 *)(param_2 + param_3 + 0xc);
  uVar31 = *(undefined1 *)(param_2 + param_3 + 0xd);
  uVar32 = *(undefined1 *)(param_2 + param_3 + 0xe);
  uVar33 = *(undefined1 *)(param_2 + param_3 + 0xf);
  puVar35 = (uint *)0x10;
  _swift_slowAlloc(0x10,0xffffffffffffffff);
  if ((long)uVar53 < 2) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b990);
    (*pcVar34)();
  }
  uVar54 = 0;
  uVar45 = CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)));
  uVar44 = CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)));
  bVar48 = true;
  uVar46 = CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26)));
  uVar51 = CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
  do {
    uVar49 = uVar53;
    if (!bVar48) {
      if ((long)uVar54 < 3) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b94c);
        (*pcVar34)();
      }
      uVar49 = uVar54 - 1;
    }
    uVar54 = uVar49;
    if (*(ulong *)(lVar52 + 0x10) <= uVar54) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b938);
      (*pcVar34)();
    }
    lVar41 = ((long *)(lVar52 + 0x20))[uVar54];
    uVar49 = *(ulong *)(lVar41 + 0x10);
    if (uVar49 == 0) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b93c);
      (*pcVar34)();
    }
    if (uVar49 == 1) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b940);
      (*pcVar34)();
    }
    if (uVar49 < 3) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b944);
      (*pcVar34)();
    }
    if (uVar49 == 3) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b948);
      (*pcVar34)();
    }
    bVar48 = false;
    uVar2 = *(uint *)(lVar41 + 0x20) ^ uVar45;
    uVar51 = *(uint *)(lVar41 + 0x2c) ^ uVar51;
    uVar3 = *(uint *)(lVar41 + 0x28) ^ uVar46;
    uVar4 = *(uint *)(lVar41 + 0x24) ^ uVar44;
    uVar45 = *(uint *)(&DAT_100ab3b40 + (ulong)(uVar51 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3718 + (ulong)(uVar2 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3f68 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab4390 + (ulong)(uVar4 >> 0x18) * 4);
    uVar44 = *(uint *)(&DAT_100ab3b40 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3718 + (ulong)(uVar4 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3f68 + (ulong)(uVar51 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab4390 + (ulong)(uVar3 >> 0x18) * 4);
    uVar46 = *(uint *)(&DAT_100ab3b40 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3718 + (ulong)(uVar3 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3f68 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab4390 + (ulong)(uVar51 >> 0x18) * 4);
    uVar51 = *(uint *)(&DAT_100ab3b40 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3718 + (ulong)(uVar51 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab3f68 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_100ab4390 + (ulong)(uVar2 >> 0x18) * 4);
  } while (uVar54 != 2);
  lVar41 = *(long *)(lVar52 + 0x28);
  uVar54 = *(ulong *)(lVar41 + 0x10);
  if (uVar54 == 0) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9a0);
    (*pcVar34)();
  }
  uVar45 = *(uint *)(lVar41 + 0x20) ^ uVar45;
  *puVar35 = uVar45;
  if (uVar54 == 1) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9a4);
    (*pcVar34)();
  }
  uVar44 = *(uint *)(lVar41 + 0x24) ^ uVar44;
  puVar35[1] = uVar44;
  if (uVar54 < 3) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9a8);
    (*pcVar34)();
  }
  uVar46 = *(uint *)(lVar41 + 0x28) ^ uVar46;
  puVar35[2] = uVar46;
  if (uVar54 == 3) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9ac);
    (*pcVar34)();
  }
  uVar51 = *(uint *)(lVar41 + 0x2c) ^ uVar51;
  puVar35[3] = uVar51;
  puVar36 = puVar35;
  FUN_10062bc64();
  if (*(ulong *)(puVar36 + 4) <= (ulong)(uVar45 & 0xff)) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9b0);
    (*pcVar34)();
  }
  uVar2 = puVar36[(ulong)(uVar45 & 0xff) + 8];
  _swift_bridgeObjectRelease();
  uVar54 = (ulong)(uVar51 >> 8 & 0xff);
  uVar53 = *(ulong *)(*(long *)(unaff_x20 + 0x98) + 0x10);
  if (uVar53 <= uVar54) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9b4);
    (*pcVar34)();
  }
  uVar49 = (ulong)(uVar46 >> 0x10 & 0xff);
  if (uVar53 <= uVar49) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9b8);
    (*pcVar34)();
  }
  if (uVar53 <= uVar44 >> 0x18) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9bc);
    (*pcVar34)();
  }
  if (*(long *)(lVar52 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9c0);
    (*pcVar34)();
  }
  lVar41 = *(long *)(lVar52 + 0x20);
  uVar40 = *(ulong *)(lVar41 + 0x10);
  if (uVar40 == 0) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9c4);
    (*pcVar34)();
  }
  if (uVar53 <= (uVar44 & 0xff)) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9c8);
    (*pcVar34)();
  }
  uVar47 = (ulong)(uVar45 >> 8 & 0xff);
  if (uVar47 < uVar53) {
    uVar50 = (ulong)(uVar51 >> 0x10 & 0xff);
    if (uVar53 <= uVar50) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9d0);
      (*pcVar34)();
    }
    if (uVar53 <= uVar46 >> 0x18) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9d4);
      (*pcVar34)();
    }
    if (uVar40 == 1) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9d8);
      (*pcVar34)();
    }
    if (uVar53 <= (uVar46 & 0xff)) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9dc);
      (*pcVar34)();
    }
    uVar37 = (ulong)(uVar44 >> 8 & 0xff);
    if (uVar53 <= uVar37) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9e0);
      (*pcVar34)();
    }
    uVar42 = (ulong)(uVar45 >> 0x10 & 0xff);
    if (uVar53 <= uVar42) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9e4);
      (*pcVar34)();
    }
    if (uVar53 <= uVar51 >> 0x18) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9e8);
      (*pcVar34)();
    }
    if (2 < uVar40) {
      if (uVar53 <= (uVar51 & 0xff)) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9f0);
        (*pcVar34)();
      }
      uVar40 = (ulong)(uVar46 >> 8 & 0xff);
      if (uVar53 <= uVar40) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9f4);
        (*pcVar34)();
      }
      uVar43 = (ulong)(uVar44 >> 0x10 & 0xff);
      if (uVar53 <= uVar43) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9f8);
        (*pcVar34)();
      }
      if (uVar45 >> 0x18 < uVar53) {
        lVar1 = *(long *)(unaff_x20 + 0x98) + 0x20;
        iVar5 = *(int *)(lVar1 + uVar54 * 4);
        iVar6 = *(int *)(lVar1 + uVar49 * 4);
        iVar7 = *(int *)(lVar1 + (ulong)(uVar44 >> 0x18) * 4);
        uVar4 = *(uint *)(lVar1 + (ulong)(uVar44 & 0xff) * 4);
        iVar8 = *(int *)(lVar1 + uVar47 * 4);
        iVar9 = *(int *)(lVar1 + uVar50 * 4);
        iVar10 = *(int *)(lVar1 + (ulong)(uVar46 >> 0x18) * 4);
        uVar11 = *(uint *)(lVar1 + (ulong)(uVar46 & 0xff) * 4);
        iVar12 = *(int *)(lVar1 + uVar37 * 4);
        iVar13 = *(int *)(lVar1 + uVar42 * 4);
        uVar44 = *(uint *)(lVar41 + 0x20);
        uVar46 = *(uint *)(lVar41 + 0x24);
        iVar14 = *(int *)(lVar1 + (ulong)(uVar51 >> 0x18) * 4);
        uVar3 = *(uint *)(lVar41 + 0x28);
        uVar51 = *(uint *)(lVar1 + (ulong)(uVar51 & 0xff) * 4);
        iVar15 = *(int *)(lVar1 + uVar40 * 4);
        iVar16 = *(int *)(lVar1 + uVar43 * 4);
        iVar17 = *(int *)(lVar1 + (ulong)(uVar45 >> 0x18) * 4);
        _swift_bridgeObjectRetain(lVar41);
        _swift_bridgeObjectRelease(lVar52);
        if (3 < *(ulong *)(lVar41 + 0x10)) {
          uVar44 = uVar44 ^ (iVar5 << 8 | uVar2 | iVar6 << 0x10 | iVar7 << 0x18);
          uVar46 = (iVar8 << 8 | uVar4 | iVar9 << 0x10 | iVar10 << 0x18) ^ uVar46;
          uVar3 = (iVar12 << 8 | uVar11 | iVar13 << 0x10 | iVar14 << 0x18) ^ uVar3;
          uVar45 = *(uint *)(lVar41 + 0x2c);
          _swift_bridgeObjectRelease(lVar41);
          uVar45 = uVar45 ^ (iVar15 << 8 | uVar51 | iVar16 << 0x10 | iVar17 << 0x18);
          puVar39 = &DAT_100ab7e50;
          FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
          _swift_allocObject();
          *(undefined8 *)(puVar39 + 0x18) = 0x20;
          *(undefined8 *)(puVar39 + 0x10) = 0x10;
          puVar39[0x20] = (char)uVar44;
          puVar39[0x21] = (char)(uVar44 >> 8);
          puVar39[0x22] = (char)(uVar44 >> 0x10);
          puVar39[0x23] = (char)(uVar44 >> 0x18);
          puVar39[0x24] = (char)uVar46;
          puVar39[0x25] = (char)(uVar46 >> 8);
          puVar39[0x26] = (char)(uVar46 >> 0x10);
          puVar39[0x27] = (char)(uVar46 >> 0x18);
          puVar39[0x28] = (char)uVar3;
          puVar39[0x29] = (char)(uVar3 >> 8);
          puVar39[0x2a] = (char)(uVar3 >> 0x10);
          puVar39[0x2b] = (char)(uVar3 >> 0x18);
          puVar39[0x2c] = (char)uVar45;
          puVar39[0x2d] = (char)(uVar45 >> 8);
          puVar39[0x2e] = (char)(uVar45 >> 0x10);
          puVar39[0x2f] = (char)(uVar45 >> 0x18);
          _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
          return;
        }
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x10062ba00);
        (*pcVar34)();
      }
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9fc);
      (*pcVar34)();
    }
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9ec);
    (*pcVar34)();
  }
                    /* WARNING: Does not return */
  pcVar34 = (code *)SoftwareBreakpoint(1,0x10062b9cc);
  (*pcVar34)();
}

