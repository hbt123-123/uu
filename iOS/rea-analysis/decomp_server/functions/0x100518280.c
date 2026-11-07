// rea decompile_all
// name: FUN_100518280
// address: 0x100518280
// body: available
// range: 0x100518280-0x1005185e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100518280(long param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 **ppuVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long unaff_x21;
  long lVar14;
  undefined1 auStack_d8 [24];
  undefined8 *local_c0;
  ulong uStack_b8;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
LAB_1005182b4:
  lVar14 = *(long *)(param_2 + 0x58);
  do {
    if (((0 < lVar14) && (pcVar1 = *(char **)(param_2 + 0x28), pcVar1 != *(char **)(param_2 + 0x30))
        ) && ((*pcVar1 == ',' || (*pcVar1 == ';')))) {
      *(char **)(param_2 + 0x28) = pcVar1 + 1;
      FUN_100560bb8();
    }
    uStack_88 = *(undefined8 *)(param_2 + 0x70);
    local_90 = *(undefined8 *)(param_2 + 0x68);
    uStack_78 = *(undefined8 *)(param_2 + 0x80);
    uStack_80 = *(undefined8 *)(param_2 + 0x78);
    uStack_68 = *(undefined8 *)(param_2 + 0x90);
    local_70 = *(undefined8 *)(param_2 + 0x88);
    uVar8 = *(ulong *)(param_2 + 0x98);
    puVar5 = &local_90;
    FUN_10055dc44(puVar5,uVar8,*(undefined8 *)(param_2 + 0xa0),*(undefined2 *)(param_2 + 0x60));
    if (unaff_x21 != 0) {
      return;
    }
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1005185e8);
      (*pcVar4)();
    }
    *(long *)(param_2 + 0x58) = lVar14 + 1;
    if (puVar5 == (undefined8 *)0x1) {
      puVar6 = (undefined1 *)(param_1 + 0x10);
      ppuVar9 = &local_c0;
      _swift_beginAccess(puVar6,ppuVar9,0x21,0);
      FUN_100560bb8();
      pcVar1 = *(char **)(param_2 + 0x28);
      if ((pcVar1 == *(char **)(param_2 + 0x30)) || (*pcVar1 != ':')) {
        FUN_1004f9b10();
        _swift_allocError(&DAT_1009d1c98,puVar6,0,0);
        *puVar6 = 0;
        _swift_willThrow();
        _swift_endAccess(&local_c0);
        return;
      }
      *(char **)(param_2 + 0x28) = pcVar1 + 1;
      FUN_100560bb8();
      FUN_10055e868();
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      *(undefined1 **)(param_1 + 0x10) = puVar6;
      *(undefined8 ***)(param_1 + 0x18) = ppuVar9;
      _swift_endAccess(&local_c0);
      _swift_bridgeObjectRelease(uVar13);
      goto LAB_1005182b4;
    }
    lVar14 = lVar14 + 1;
  } while (puVar5 != (undefined8 *)0x2);
  FUN_1004f6144();
  pbVar12 = *(byte **)(param_2 + 0x28);
  pbVar2 = *(byte **)(param_2 + 0x30);
  do {
    if ((pbVar12 == pbVar2) || (bVar3 = *pbVar12, 0x23 < bVar3)) goto LAB_1005183d8;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar3 != 0x23) {
LAB_1005183d8:
        if ((pbVar12 == pbVar2) || (*pbVar12 != 0x3a)) {
          puVar7 = puVar5;
          FUN_1004f9b10();
          _swift_allocError(&DAT_1009d1c98,puVar7,0,0);
          *(undefined1 *)puVar7 = 0;
          _swift_willThrow();
          local_98 = 0;
          local_c0 = puVar5;
          uStack_b8 = uVar8;
          _swift_beginAccess(param_1 + 0x20,auStack_d8,0x21,0);
          FUN_1004f99e8(&local_c0,param_1 + 0x20);
          _swift_endAccess(auStack_d8);
          return;
        }
        do {
          pbVar12 = pbVar12 + 1;
LAB_1005183f4:
          *(byte **)(param_2 + 0x28) = pbVar12;
          if ((pbVar12 == pbVar2) || (bVar3 = *pbVar12, 0x23 < bVar3)) {
LAB_1005184cc:
            puVar7 = puVar5;
            uVar10 = uVar8;
            FUN_10055ea1c();
            FUN_100006cdc(puVar5,uVar8);
            local_98 = 0;
            local_c0 = puVar7;
            uStack_b8 = uVar10;
            _swift_beginAccess(param_1 + 0x20,auStack_d8,0x21,0);
            FUN_1004f99e8(&local_c0,param_1 + 0x20);
            _swift_endAccess(auStack_d8);
            goto LAB_1005182b4;
          }
        } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar3 != 0x23) goto LAB_1005184cc;
        *(byte **)(param_2 + 0x28) = pbVar12 + 1;
        pbVar11 = pbVar12 + 1;
        do {
          pbVar12 = pbVar2;
          if (pbVar11 == pbVar2) break;
          pbVar12 = pbVar11 + 1;
          bVar3 = *pbVar11;
          pbVar11 = pbVar12;
        } while (bVar3 != 10 && bVar3 != 0xd);
        goto LAB_1005183f4;
      }
      *(byte **)(param_2 + 0x28) = pbVar12 + 1;
      pbVar11 = pbVar12 + 1;
      do {
        if (pbVar11 == pbVar2) {
          *(byte **)(param_2 + 0x28) = pbVar2;
          pbVar12 = pbVar2;
          goto LAB_1005183d8;
        }
        pbVar12 = pbVar11 + 1;
        bVar3 = *pbVar11;
        pbVar11 = pbVar12;
      } while (bVar3 != 10 && bVar3 != 0xd);
    }
    else {
      pbVar12 = pbVar12 + 1;
    }
    *(byte **)(param_2 + 0x28) = pbVar12;
  } while( true );
}

