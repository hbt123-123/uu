// rea decompile_all
// name: FUN_1004fe6a4
// address: 0x1004fe6a4
// body: available
// range: 0x1004fe6a4-0x1004fea77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fe6a4(ulong *param_1,code *param_2)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [56];
  undefined8 local_140;
  undefined1 local_138;
  char *local_108;
  ulong *puStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    puVar9 = param_1;
    FUN_1004fdea4();
    if (unaff_x21 == 0) {
      if (puVar9 < (ulong *)0x7fffffff) {
        puVar7 = (ulong *)unaff_x20[1];
        if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fea74);
          (*pcVar2)();
        }
        if (puVar9 <= puVar7) {
          pcVar14 = (char *)*unaff_x20;
          *unaff_x20 = (long)(pcVar14 + (long)puVar9);
          unaff_x20[1] = (long)puVar7 - (long)puVar9;
          lVar8 = 0;
          pcVar1 = pcVar14;
          for (puVar7 = puVar9; puVar7 != (ulong *)0x0; puVar7 = (ulong *)((long)puVar7 + -1)) {
            if ((-1 < *pcVar1) && (bVar3 = SCARRY8(lVar8,1), lVar8 = lVar8 + 1, bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fe80c);
              (*pcVar2)();
            }
            pcVar1 = pcVar1 + 1;
          }
          puVar10 = (undefined1 *)*param_1;
          lVar12 = *(long *)(puVar10 + 0x10);
          if (SCARRY8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fea78);
            (*pcVar2)();
          }
          puVar4 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)puVar4 == 0) || ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < lVar12 + lVar8)) {
            (*param_2)();
            puVar10 = puVar4;
          }
          FUN_1005062d0();
          FUN_10007f314(auStack_178,auStack_1d0,&DAT_100aaa0e8,&DAT_1008358c0);
          local_e8 = 1;
          uStack_d8 = 0;
          local_e0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          local_b0 = 0;
          local_a8 = 1;
          uStack_80 = 0xf000000000000000;
          local_88 = 0;
          uStack_70 = 0xf000000000000000;
          uStack_78 = 0;
          uStack_f0 = 0;
          local_108 = pcVar14;
          puStack_100 = puVar9;
          local_f8 = pcVar14;
          FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
          local_a0 = local_140;
          local_98 = local_138;
          puVar4 = auStack_1a8;
          FUN_100506304();
          pcVar1 = local_108;
          puVar7 = puStack_100;
          do {
            puStack_100 = puVar9;
            local_108 = pcVar14;
            if (puStack_100 == (ulong *)0x0) {
              *param_1 = (ulong)puVar10;
              puStack_100 = (ulong *)0x0;
              FUN_100506304(&local_108);
              *(undefined1 *)(unaff_x20 + 4) = 1;
              return;
            }
            pcVar14 = local_108 + 1;
            uVar13 = (ulong)*local_108;
            puVar9 = (ulong *)((long)puStack_100 + -1);
            if ((long)uVar13 < 0) {
              if ((long)puVar9 < 1) {
LAB_1004fe9c0:
                *param_1 = (ulong)puVar10;
                FUN_100506290();
                _swift_allocError(&DAT_1009cdf18,puVar4,0,0);
                *puVar4 = 3;
                _swift_willThrow();
                FUN_100506304(&local_108);
                return;
              }
              uVar13 = uVar13 & 0x7f;
              pcVar14 = local_108 + 2;
              uVar5 = 7;
              while (uVar13 = ((ulong)(byte)pcVar14[-1] & 0x7f) << (uVar5 & 0x3f) | uVar13,
                    pcVar14[-1] < '\0') {
                if (puVar9 < (ulong *)0x2) goto LAB_1004fe9c0;
                pcVar14 = pcVar14 + 1;
                puVar9 = (ulong *)((long)puVar9 + -1);
                bVar3 = 0x38 < uVar5;
                uVar5 = uVar5 + 7;
                if (bVar3) goto LAB_1004fe9c0;
              }
              puVar9 = (ulong *)((long)puVar9 + -1);
            }
            uVar5 = *(ulong *)(puVar10 + 0x10);
            local_108 = pcVar1;
            puStack_100 = puVar7;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar5) {
              puVar4 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              (*param_2)(puVar4,uVar5 + 1,1,puVar10);
              puVar10 = puVar4;
            }
            *(ulong *)(puVar10 + 0x10) = uVar5 + 1;
            *(ulong *)(puVar10 + uVar5 * 8 + 0x20) = uVar13;
            pcVar1 = local_108;
            puVar7 = puStack_100;
          } while( true );
        }
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar9,0,0);
        uVar6 = 1;
      }
      else {
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar9,0,0);
        uVar6 = 3;
      }
      *(undefined1 *)puVar9 = uVar6;
      _swift_willThrow();
    }
  }
  else if ((*(char *)((long)unaff_x20 + 0x21) == '\0') &&
          (puVar9 = param_1, FUN_1004fdea4(), unaff_x21 == 0)) {
    uVar11 = *param_1;
    uVar13 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar11;
    if ((uVar13 & 1) == 0) {
      uVar5 = 0;
      (*param_2)(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    }
    uVar13 = *(ulong *)(uVar5 + 0x10);
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      (*param_2)(uVar11,uVar13 + 1,1,uVar5);
      uVar5 = uVar11;
    }
    *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
    *(ulong **)(uVar5 + uVar13 * 8 + 0x20) = puVar9;
    *param_1 = uVar5;
    *(undefined1 *)(unaff_x20 + 4) = 1;
  }
  return;
}

