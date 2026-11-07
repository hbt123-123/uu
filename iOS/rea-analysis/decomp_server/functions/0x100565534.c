// rea decompile_all
// name: FUN_100565534
// address: 0x100565534
// body: available
// range: 0x100565534-0x10056586b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100565868 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100565534(long param_1,ulong param_2)

{
  size_t *psVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  code *pcVar8;
  void *pvVar9;
  void *pvVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
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
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    lVar22 = 0;
    uVar2 = (param_2 & 0x1fffffff) << 3 | 2;
    pbVar18 = *(byte **)(unaff_x20 + 8);
    do {
      psVar1 = (size_t *)(param_1 + 0x20 + lVar22 * 0x10);
      pvVar3 = (void *)*psVar1;
      uVar4 = psVar1[1];
      uVar16 = uVar2;
      uVar15 = uVar2;
      pbVar19 = pbVar18;
      if (0x7f < (param_2 & 0x1fffffff) << 3) {
        do {
          pbVar19 = pbVar18 + 1;
          *pbVar18 = (byte)uVar16 | 0x80;
          uVar15 = uVar16 >> 7;
          uVar12 = uVar16 >> 0xe;
          uVar16 = uVar15;
          pbVar18 = pbVar19;
        } while (uVar12 != 0);
      }
      pbVar13 = pbVar19 + 1;
      *pbVar19 = (byte)uVar15;
      uVar7 = (uint)(uVar4 >> 0x20);
      uVar11 = uVar7 >> 0x1e;
      iVar20 = (int)pvVar3;
      iVar14 = (int)((ulong)pvVar3 >> 0x20);
      if (uVar7 >> 0x1e < 2) {
        if (uVar11 == 0) {
          uVar16 = uVar4 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar14,iVar20)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100565854);
            (*pcVar8)();
          }
          uVar16 = (ulong)(iVar14 - iVar20);
        }
joined_r0x00010056561c:
        pbVar18 = pbVar13;
        uVar15 = uVar16;
        if (0x7f < uVar16) {
          do {
            pbVar13 = pbVar18 + 1;
            *pbVar18 = (byte)uVar15 | 0x80;
            uVar16 = uVar15 >> 7;
            uVar12 = uVar15 >> 0xe;
            pbVar18 = pbVar13;
            uVar15 = uVar16;
          } while (uVar12 != 0);
        }
        pbVar18 = pbVar13 + 1;
        *pbVar13 = (byte)uVar16;
        pvVar9 = pvVar3;
        if (uVar11 < 2) {
          if (uVar11 == 0) {
            local_76 = SUB81(pvVar3,0);
            local_75 = (undefined1)((ulong)pvVar3 >> 8);
            local_74 = (undefined1)((ulong)pvVar3 >> 0x10);
            local_73 = (undefined1)((ulong)pvVar3 >> 0x18);
            local_72 = (undefined1)((ulong)pvVar3 >> 0x20);
            local_71 = (undefined1)((ulong)pvVar3 >> 0x28);
            local_70 = (undefined1)((ulong)pvVar3 >> 0x30);
            local_6f = (undefined1)((ulong)pvVar3 >> 0x38);
            local_6e = (undefined1)uVar4;
            local_6d = (undefined1)(uVar4 >> 8);
            local_6c = (undefined1)(uVar4 >> 0x10);
            local_6b = (undefined1)(uVar4 >> 0x18);
            local_6a = (undefined1)(uVar4 >> 0x20);
            uVar16 = uVar4 >> 0x30 & 0xff;
            local_69 = (undefined1)(uVar4 >> 0x28);
            if (uVar16 != 0) {
              _memmove(pbVar18,&local_76,uVar16);
              pbVar18 = pbVar18 + uVar16;
            }
          }
          else {
            lVar21 = (long)iVar20;
            pvVar6 = (void *)(((long)pvVar3 >> 0x20) - lVar21);
            if ((long)pvVar3 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10056585c);
              (*pcVar8)();
            }
            FUN_100008184(pvVar3,uVar4);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            pvVar10 = pvVar9;
            if (pvVar9 != (void *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar21,(long)pvVar10)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100565868);
                (*pcVar8)();
              }
              pvVar9 = (void *)((lVar21 - (long)pvVar10) + (long)pvVar9);
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if ((long)pvVar6 <= (long)pvVar10) {
              pvVar10 = pvVar6;
            }
            if (pvVar9 != (void *)0x0) {
joined_r0x000100565758:
              if (0 < (long)pvVar10) {
                _memmove(pbVar18,pvVar9,(size_t)pvVar10);
                FUN_100006cdc(pvVar3,uVar4);
                pbVar18 = pbVar18 + (long)pvVar10;
                goto LAB_10056559c;
              }
            }
            FUN_100006cdc(pvVar3,uVar4);
          }
        }
        else if (uVar11 == 2) {
          lVar21 = *(long *)((long)pvVar3 + 0x10);
          lVar5 = *(long *)((long)pvVar3 + 0x18);
          FUN_100008184(pvVar3,uVar4);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          pvVar10 = pvVar9;
          if (pvVar9 != (void *)0x0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar21,(long)pvVar10)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100565864);
              (*pcVar8)();
            }
            pvVar9 = (void *)((lVar21 - (long)pvVar10) + (long)pvVar9);
          }
          pvVar6 = (void *)(lVar5 - lVar21);
          if (SBORROW8(lVar5,lVar21)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100565860);
            (*pcVar8)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)pvVar6 <= (long)pvVar10) {
            pvVar10 = pvVar6;
          }
          if (pvVar9 != (void *)0x0) goto joined_r0x000100565758;
          FUN_100006cdc(pvVar3,uVar4);
        }
      }
      else {
        if (uVar11 == 2) {
          uVar16 = *(long *)((long)pvVar3 + 0x18) - *(long *)((long)pvVar3 + 0x10);
          if (SBORROW8(*(long *)((long)pvVar3 + 0x18),*(long *)((long)pvVar3 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100565858);
            (*pcVar8)();
          }
          goto joined_r0x00010056561c;
        }
        pbVar19[1] = 0;
        pbVar18 = pbVar19 + 2;
      }
LAB_10056559c:
      lVar22 = lVar22 + 1;
    } while (lVar22 != lVar17);
    *(byte **)(unaff_x20 + 8) = pbVar18;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

