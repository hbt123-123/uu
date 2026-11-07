// rea decompile_all
// name: FUN_100672d34
// address: 0x100672d34
// body: available
// range: 0x100672d34-0x1006730b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067306c to 0x1007df484 _swift_slowDealloc (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100672d34(long param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  puVar6 = (undefined8 *)0x140;
  _swift_slowAlloc(0x140,0xffffffffffffffff);
  lVar7 = 0;
  uVar9 = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  puVar6[0x19] = 0;
  puVar6[0x18] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x21] = 0;
  puVar6[0x20] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  param_3 = param_3 >> 1;
  uVar8 = param_3 - param_2;
  puVar6[0x25] = 0;
  puVar6[0x24] = 0;
  puVar6[0x27] = 0;
  puVar6[0x26] = 0;
  do {
    if (uVar9 < 0x10) {
      lVar3 = param_2 + lVar7;
      if (SCARRY8(param_2,lVar7)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100673074);
        (*pcVar5)();
      }
      if (param_3 == param_2) {
        *(undefined4 *)((long)puVar6 + lVar7) = 0;
      }
      else {
        if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100673078);
          (*pcVar5)();
        }
        if ((long)uVar8 < 1) {
          uVar13 = 0;
          uVar15 = 0;
          uVar11 = 0;
          uVar10 = 0;
        }
        else {
          if ((lVar3 < (long)param_2) || ((long)param_3 <= lVar3)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10067307c);
            (*pcVar5)();
          }
          uVar10 = (uint)*(byte *)(param_1 + lVar3) << 0x18;
          if (uVar8 == 1) {
            uVar13 = 0;
            uVar15 = 0;
            uVar11 = 0;
          }
          else {
            if ((long)param_3 <= lVar3 + 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100673080);
              (*pcVar5)();
            }
            uVar11 = (uint)*(byte *)(param_1 + lVar3 + 1) << 0x10;
            if (uVar8 < 3) {
              uVar13 = 0;
              uVar15 = 0;
            }
            else {
              lVar1 = lVar3 + 2;
              if ((lVar1 < (long)param_2) || ((long)param_3 <= lVar1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100673084);
                (*pcVar5)();
              }
              uVar15 = (uint)*(byte *)(param_1 + lVar1) << 8;
              if (uVar8 == 3) {
                uVar13 = 0;
              }
              else {
                lVar1 = lVar3 + 3;
                if (SCARRY8(lVar3,3)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006730b0);
                  (*pcVar5)();
                }
                if ((lVar1 < (long)param_2) || ((long)param_3 <= lVar1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006730b4);
                  (*pcVar5)();
                }
                uVar13 = (uint)*(byte *)(param_1 + lVar1);
              }
            }
          }
        }
        *(uint *)((long)puVar6 + lVar7) = uVar15 | uVar13 | uVar11 | uVar10;
      }
    }
    else {
      puVar2 = (uint *)((long)puVar6 + lVar7);
      uVar10 = puVar2[-8] ^ puVar2[-3] ^ puVar2[-0xe] ^ puVar2[-0x10];
      *puVar2 = uVar10 >> 0x1f | uVar10 << 1;
    }
    uVar9 = uVar9 + 1;
    lVar7 = lVar7 + 4;
  } while (uVar9 != 0x50);
  uVar9 = *param_4;
  uVar8 = *(ulong *)(uVar9 + 0x10);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100673088);
    (*pcVar5)();
  }
  if (uVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10067308c);
    (*pcVar5)();
  }
  if (uVar8 < 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100673090);
    (*pcVar5)();
  }
  if (uVar8 == 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100673094);
    (*pcVar5)();
  }
  if (uVar8 < 5) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100673098);
    (*pcVar5)();
  }
  uVar8 = 0;
  uVar11 = *(uint *)(uVar9 + 0x20);
  uVar10 = uVar11;
  uVar13 = *(uint *)(uVar9 + 0x24);
  uVar15 = *(uint *)(uVar9 + 0x28);
  uVar16 = *(uint *)(uVar9 + 0x2c);
  uVar12 = *(uint *)(uVar9 + 0x30);
  do {
    uVar14 = uVar16;
    uVar16 = uVar15;
    uVar17 = uVar10;
    uVar15 = uVar16 ^ uVar14 ^ uVar13;
    uVar10 = uVar15;
    iVar4 = -0x359d3e2a;
    if (0xffffffffffffffeb < uVar8 - 0x3c) {
      uVar10 = uVar13 & (uVar16 | uVar14) | uVar16 & uVar14;
      iVar4 = -0x70e44324;
    }
    if (0xffffffffffffffeb < uVar8 - 0x28) {
      uVar10 = uVar15;
      iVar4 = 0x6ed9eba1;
    }
    if (uVar8 < 0x14) {
      uVar10 = uVar13 & uVar16 | uVar14 & (uVar13 ^ 0xffffffff);
    }
    if (uVar8 < 0x14) {
      iVar4 = 0x5a827999;
    }
    uVar15 = uVar13 >> 2 | uVar13 << 0x1e;
    uVar10 = (uVar17 >> 0x1b | uVar17 << 5) + uVar12 + iVar4 + uVar10 +
             *(int *)((long)puVar6 + uVar8 * 4);
    uVar8 = uVar8 + 1;
    uVar13 = uVar17;
    uVar12 = uVar14;
  } while (uVar8 != 0x50);
  uVar8 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar8 & 1) == 0) {
    FUN_100672d20();
  }
  uVar8 = *(ulong *)(uVar9 + 0x10);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10067309c);
    (*pcVar5)();
  }
  *(uint *)(uVar9 + 0x20) = uVar10 + uVar11;
  if (uVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006730a0);
    (*pcVar5)();
  }
  *(uint *)(uVar9 + 0x24) = *(int *)(uVar9 + 0x24) + uVar17;
  if (uVar8 < 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006730a4);
    (*pcVar5)();
  }
  *(uint *)(uVar9 + 0x28) = *(int *)(uVar9 + 0x28) + uVar15;
  if (uVar8 == 3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006730a8);
    (*pcVar5)();
  }
  *(uint *)(uVar9 + 0x2c) = *(int *)(uVar9 + 0x2c) + uVar16;
  if (uVar8 < 5) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006730ac);
    (*pcVar5)();
  }
  *(uint *)(uVar9 + 0x30) = *(int *)(uVar9 + 0x30) + uVar14;
  *param_4 = uVar9;
  _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
  return;
}

