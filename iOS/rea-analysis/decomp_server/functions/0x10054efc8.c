// rea decompile_all
// name: FUN_10054efc8
// address: 0x10054efc8
// body: available
// range: 0x10054efc8-0x10054f41f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054efc8(ulong *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  puVar4 = param_1;
  FUN_100560bb8();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar7 == pbVar1) || (*pbVar7 != 0x3a)) {
LAB_10054f2bc:
    uVar9 = 0;
    goto LAB_10054f2c0;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
  FUN_100560bb8();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar7 != pbVar1) && (*pbVar7 == 0x5b)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
    FUN_100560bb8();
    bVar3 = true;
    do {
      puVar11 = (ulong *)&DAT_100aaa100;
      pbVar7 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar7 == pbVar1) {
        if (!bVar3) goto LAB_10054f144;
      }
      else {
        bVar2 = *pbVar7;
        if (bVar2 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
          FUN_100560bb8();
          return;
        }
        if (!bVar3) {
          if (bVar2 < 0x24) {
            do {
              if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar2 != 0x23) break;
                pbVar8 = pbVar7 + 1;
                do {
                  pbVar7 = pbVar1;
                  if (pbVar8 == pbVar1) break;
                  pbVar7 = pbVar8 + 1;
                  bVar2 = *pbVar8;
                  pbVar8 = pbVar7;
                } while (bVar2 != 10 && bVar2 != 0xd);
              }
              else {
                pbVar7 = pbVar7 + 1;
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar7;
              if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) break;
            } while( true );
          }
LAB_10054f144:
          if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2c)) {
            do {
              pbVar7 = pbVar7 + 1;
LAB_10054f15c:
              *(byte **)(unaff_x20 + 0x28) = pbVar7;
              if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) goto LAB_10054f0e8;
            } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar2 != 0x23) goto LAB_10054f0e8;
            pbVar8 = pbVar7 + 1;
            do {
              pbVar7 = pbVar1;
              if (pbVar8 == pbVar1) break;
              pbVar7 = pbVar8 + 1;
              bVar2 = *pbVar8;
              pbVar8 = pbVar7;
            } while (bVar2 != 10 && bVar2 != 0xd);
            goto LAB_10054f15c;
          }
          goto LAB_10054f2bc;
        }
      }
LAB_10054f0e8:
      FUN_100561a58();
      puVar12 = puVar4;
      if ((param_2 & 1) != 0) {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2d)) {
          *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
        }
        FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
        param_2 = 0;
        puVar4 = puVar11;
        _swift_initStaticObject();
        FUN_100561bf0();
        if (((ulong)puVar4 & 1) == 0) {
          *(byte **)(unaff_x20 + 0x28) = pbVar7;
          if (pbVar7 == pbVar1) goto LAB_10054f3d8;
          bVar2 = *pbVar7;
          if (bVar2 == 0x2d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
          }
          puVar4 = puVar11;
          _swift_initStaticObject(puVar11,&DAT_100aa8af0);
          param_2 = 0;
          _swift_initStaticObject();
          FUN_100561bf0();
          if ((((ulong)puVar4 & 1) == 0) && (FUN_100561bf0(), ((ulong)puVar11 & 1) == 0))
          goto LAB_10054f3d4;
          puVar12 = (ulong *)0xfff0000000000000;
          if (bVar2 != 0x2d) {
            puVar12 = (ulong *)0x7ff0000000000000;
          }
        }
        else {
          puVar12 = (ulong *)0x7ff8000000000000;
        }
      }
      puVar11 = (ulong *)*param_1;
      puVar4 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar4 & 1) == 0) {
        param_2 = puVar11[2] + 1;
        puVar4 = (ulong *)0x0;
        FUN_1005075b4(0,param_2,1,puVar11);
        puVar11 = puVar4;
      }
      uVar6 = puVar11[2];
      uVar5 = uVar6 + 1;
      if (puVar11[3] >> 1 <= uVar6) {
        puVar4 = (ulong *)(ulong)(1 < puVar11[3]);
        param_2 = uVar5;
        FUN_1005075b4(puVar4,uVar5,1,puVar11);
        puVar11 = puVar4;
      }
      bVar3 = false;
      puVar11[2] = uVar5;
      puVar11[uVar6 + 4] = (ulong)puVar12;
      *param_1 = (ulong)puVar11;
    } while( true );
  }
  FUN_100561a58();
  if ((param_2 & 1) == 0) {
LAB_10054f374:
    uVar10 = *param_1;
    uVar5 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar10;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      FUN_1005075b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar10 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1005075b4(uVar10,uVar5 + 1,1,uVar6);
    }
    *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
    *(ulong **)(uVar10 + uVar5 * 8 + 0x20) = puVar4;
    *param_1 = uVar10;
    return;
  }
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2d)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
  }
  puVar4 = (ulong *)&DAT_100aaa100;
  FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
  _swift_initStaticObject();
  FUN_100561bf0();
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = (ulong *)0x7ff8000000000000;
    goto LAB_10054f374;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar7;
  FUN_100561c9c();
  if (((ulong)puVar4 >> 0x20 & 1) == 0) {
    puVar4 = (ulong *)(double)SUB84(puVar4,0);
    goto LAB_10054f374;
  }
LAB_10054f3d8:
  uVar9 = 1;
LAB_10054f2c0:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar4,0,0);
  *(undefined1 *)puVar4 = uVar9;
  _swift_willThrow();
  return;
LAB_10054f3d4:
  *(byte **)(unaff_x20 + 0x28) = pbVar7;
  puVar4 = puVar11;
  goto LAB_10054f3d8;
}

