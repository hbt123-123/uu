// rea decompile_all
// name: FUN_10052fda8
// address: 0x10052fda8
// body: available
// range: 0x10052fda8-0x1005301df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005301dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052fda8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  ulong *unaff_x20;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long unaff_x21;
  long lVar12;
  int iVar13;
  bool bVar14;
  long lVar15;
  ulong *puVar16;
  undefined1 local_76 [4];
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_10052d69c(param_2);
  if (unaff_x21 == 0) {
    puVar10 = (undefined1 *)*unaff_x20;
    puVar6 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar10;
    if (((ulong)puVar6 & 1) == 0) {
      puVar7 = (undefined1 *)0x0;
      FUN_100506f84(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar6 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100506f84(puVar6,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    puVar6[uVar1 + 0x20] = 0x5b;
    *unaff_x20 = (ulong)puVar6;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar15 = *(long *)(param_1 + 0x10);
    if (lVar15 != 0) {
      bVar14 = false;
      puVar16 = (ulong *)(param_1 + 0x28);
      do {
        puVar10 = (undefined1 *)puVar16[-1];
        uVar1 = *puVar16;
        puVar7 = puVar10;
        FUN_100008184(puVar10,uVar1);
        if (bVar14) {
          uVar2 = *(ulong *)(puVar6 + 0x10);
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
            puVar7 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_100506f84(puVar7,uVar2 + 1,1,puVar6);
            puVar6 = puVar7;
          }
          *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
          puVar6[uVar2 + 0x20] = 0x2c;
          *unaff_x20 = (ulong)puVar6;
        }
        uVar2 = *(ulong *)(puVar6 + 0x10);
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
          puVar7 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_100506f84(puVar7,uVar2 + 1,1,puVar6);
          puVar6 = puVar7;
        }
        *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
        puVar6[uVar2 + 0x20] = 0x22;
        *unaff_x20 = (ulong)puVar6;
        uVar4 = (uint)(uVar1 >> 0x20);
        uVar8 = uVar4 >> 0x1e;
        iVar13 = (int)puVar10;
        iVar9 = (int)((ulong)puVar10 >> 0x20);
        if (uVar4 >> 0x1e < 2) {
          if (uVar8 == 0) {
            if ((uVar1 >> 0x30 & 0xff) != 0) {
LAB_10052fef4:
              if (uVar8 == 2) {
                lVar12 = *(long *)(puVar10 + 0x10);
                lVar3 = *(long *)(puVar10 + 0x18);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar6 = puVar7;
                if (puVar7 != (undefined1 *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar12,(long)puVar6)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100530178);
                    (*pcVar5)();
                  }
                  puVar7 = puVar7 + (lVar12 - (long)puVar6);
                }
                puVar11 = (undefined1 *)(lVar3 - lVar12);
                if (SBORROW8(lVar3,lVar12)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100530174);
                  (*pcVar5)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if ((long)puVar11 <= (long)puVar6) {
                  puVar6 = puVar11;
                }
LAB_10052ff8c:
                puVar11 = (undefined1 *)0x0;
                if (puVar7 != (undefined1 *)0x0) {
                  puVar11 = puVar6 + (long)puVar7;
                }
              }
              else {
                if (uVar8 == 1) {
                  lVar12 = (long)iVar13;
                  puVar11 = (undefined1 *)(((long)puVar10 >> 0x20) - lVar12);
                  if ((long)puVar10 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100530170);
                    (*pcVar5)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  puVar6 = puVar7;
                  if (puVar7 != (undefined1 *)0x0) {
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar12,(long)puVar6)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x10053017c);
                      (*pcVar5)();
                    }
                    puVar7 = puVar7 + (lVar12 - (long)puVar6);
                  }
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if ((long)puVar11 <= (long)puVar6) {
                    puVar6 = puVar11;
                  }
                  goto LAB_10052ff8c;
                }
                local_76[0] = SUB81(puVar10,0);
                local_76[1] = (undefined1)((ulong)puVar10 >> 8);
                local_76[2] = (undefined1)((ulong)puVar10 >> 0x10);
                local_76[3] = (undefined1)((ulong)puVar10 >> 0x18);
                local_72 = (undefined1)((ulong)puVar10 >> 0x20);
                local_71 = (undefined1)((ulong)puVar10 >> 0x28);
                local_70 = (undefined1)((ulong)puVar10 >> 0x30);
                local_6f = (undefined1)((ulong)puVar10 >> 0x38);
                local_6e = (undefined1)uVar1;
                local_6d = (undefined1)(uVar1 >> 8);
                local_6c = (undefined1)(uVar1 >> 0x10);
                local_6b = (undefined1)(uVar1 >> 0x18);
                local_6a = (undefined1)(uVar1 >> 0x20);
                local_69 = (undefined1)(uVar1 >> 0x28);
                puVar7 = local_76;
                puVar11 = local_76 + (uVar1 >> 0x30 & 0xff);
              }
              FUN_10052c2a8(puVar7,puVar11);
            }
          }
          else {
            if (SBORROW4(iVar9,iVar13)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100530168);
              (*pcVar5)();
            }
            if (0 < iVar9 - iVar13) goto LAB_10052fef4;
          }
        }
        else if (uVar8 == 2) {
          if (SBORROW8(*(long *)(puVar10 + 0x18),*(long *)(puVar10 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10053016c);
            (*pcVar5)();
          }
          if (0 < *(long *)(puVar10 + 0x18) - *(long *)(puVar10 + 0x10)) goto LAB_10052fef4;
        }
        puVar11 = (undefined1 *)*unaff_x20;
        puVar6 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar7 = puVar11;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined1 *)0x0;
          FUN_100506f84(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar2 = *(ulong *)(puVar7 + 0x10);
        puVar6 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_100506f84(puVar6,uVar2 + 1,1,puVar7);
        }
        puVar16 = puVar16 + 2;
        *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
        puVar6[uVar2 + 0x20] = 0x22;
        FUN_100006cdc(puVar10,uVar1);
        *unaff_x20 = (ulong)puVar6;
        bVar14 = true;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_100506f84(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    puVar7[uVar1 + 0x20] = 0x5d;
    *unaff_x20 = (ulong)puVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

