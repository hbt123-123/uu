// rea decompile_all
// name: FUN_10067500c
// address: 0x10067500c
// body: available
// range: 0x10067500c-0x1006753d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100675398 to 0x1007df484 _swift_slowDealloc (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067500c(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar2 = (ulong *)0x28;
  _swift_slowAlloc(0x28,0xffffffffffffffff);
  puVar3 = (ulong *)0x28;
  _swift_slowAlloc(0x28,0xffffffffffffffff);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  uVar7 = *param_1;
  uVar5 = *(ulong *)(uVar7 + 0x10);
  if (uVar5 < 5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753a8);
    (*pcVar1)();
  }
  if (uVar5 == 5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753ac);
    (*pcVar1)();
  }
  if (uVar5 < 0xb) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753b0);
    (*pcVar1)();
  }
  if (0xf < uVar5) {
    if (0x14 < uVar5) {
      uVar8 = *(ulong *)(uVar7 + 0x48) ^ *(ulong *)(uVar7 + 0x20) ^
              *(ulong *)(uVar7 + 0x70) ^ *(ulong *)(uVar7 + 0x98) ^ *(ulong *)(uVar7 + 0xc0);
      *puVar2 = uVar8;
      if (uVar5 != 0x15) {
        uVar9 = *(ulong *)(uVar7 + 0x50) ^ *(ulong *)(uVar7 + 0x28) ^
                *(ulong *)(uVar7 + 0x78) ^ *(ulong *)(uVar7 + 0xa0) ^ *(ulong *)(uVar7 + 200);
        puVar2[1] = uVar9;
        if (0x16 < uVar5) {
          uVar10 = *(ulong *)(uVar7 + 0x58) ^ *(ulong *)(uVar7 + 0x30) ^
                   *(ulong *)(uVar7 + 0x80) ^ *(ulong *)(uVar7 + 0xa8) ^ *(ulong *)(uVar7 + 0xd0);
          puVar2[2] = uVar10;
          if (uVar5 != 0x17) {
            uVar11 = *(ulong *)(uVar7 + 0x60) ^ *(ulong *)(uVar7 + 0x38) ^
                     *(ulong *)(uVar7 + 0x88) ^ *(ulong *)(uVar7 + 0xb0) ^ *(ulong *)(uVar7 + 0xd8);
            puVar2[3] = uVar11;
            if (0x18 < uVar5) {
              uVar12 = *(ulong *)(uVar7 + 0x68) ^ *(ulong *)(uVar7 + 0x40) ^
                       *(ulong *)(uVar7 + 0x90) ^ *(ulong *)(uVar7 + 0xb8) ^
                       *(ulong *)(uVar7 + 0xe0);
              puVar2[4] = uVar12;
              uVar5 = uVar9;
              FUN_10067d834(uVar9,1);
              uVar5 = uVar12 ^ uVar5;
              *puVar3 = uVar5;
              uVar6 = uVar10;
              FUN_10067d834(uVar10,1);
              uVar6 = uVar8 ^ uVar6;
              puVar3[1] = uVar6;
              uVar4 = uVar11;
              FUN_10067d834(uVar11,1);
              uVar9 = uVar9 ^ uVar4;
              puVar3[2] = uVar9;
              FUN_10067d834(uVar12,1);
              uVar10 = uVar10 ^ uVar12;
              puVar3[3] = uVar10;
              FUN_10067d834(uVar8,1);
              uVar11 = uVar11 ^ uVar8;
              puVar3[4] = uVar11;
              uVar8 = uVar7;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar8 & 1) == 0) {
                FUN_1006541e0();
                uVar8 = *(ulong *)(uVar7 + 0x10);
              }
              else {
                uVar8 = *(ulong *)(uVar7 + 0x10);
              }
              if (uVar8 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753cc);
                (*pcVar1)();
              }
              *(ulong *)(uVar7 + 0x20) = *(ulong *)(uVar7 + 0x20) ^ uVar5;
              if (uVar8 < 6) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753d0);
                (*pcVar1)();
              }
              *(ulong *)(uVar7 + 0x48) = *(ulong *)(uVar7 + 0x48) ^ uVar5;
              if (uVar8 < 0xb) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753d4);
                (*pcVar1)();
              }
              *(ulong *)(uVar7 + 0x70) = *(ulong *)(uVar7 + 0x70) ^ uVar5;
              if (uVar8 < 0x10) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753d8);
                (*pcVar1)();
              }
              *(ulong *)(uVar7 + 0x98) = *(ulong *)(uVar7 + 0x98) ^ uVar5;
              if (0x14 < uVar8) {
                *(ulong *)(uVar7 + 0xc0) = *(ulong *)(uVar7 + 0xc0) ^ uVar5;
                *(ulong *)(uVar7 + 0x28) = *(ulong *)(uVar7 + 0x28) ^ uVar6;
                *(ulong *)(uVar7 + 0x50) = *(ulong *)(uVar7 + 0x50) ^ uVar6;
                *(ulong *)(uVar7 + 0x78) = *(ulong *)(uVar7 + 0x78) ^ uVar6;
                *(ulong *)(uVar7 + 0xa0) = *(ulong *)(uVar7 + 0xa0) ^ uVar6;
                if (uVar8 != 0x15) {
                  *(ulong *)(uVar7 + 200) = *(ulong *)(uVar7 + 200) ^ uVar6;
                  *(ulong *)(uVar7 + 0x30) = *(ulong *)(uVar7 + 0x30) ^ uVar9;
                  *(ulong *)(uVar7 + 0x58) = *(ulong *)(uVar7 + 0x58) ^ uVar9;
                  *(ulong *)(uVar7 + 0x80) = *(ulong *)(uVar7 + 0x80) ^ uVar9;
                  *(ulong *)(uVar7 + 0xa8) = *(ulong *)(uVar7 + 0xa8) ^ uVar9;
                  if (0x16 < uVar8) {
                    *(ulong *)(uVar7 + 0xd0) = *(ulong *)(uVar7 + 0xd0) ^ uVar9;
                    *(ulong *)(uVar7 + 0x38) = *(ulong *)(uVar7 + 0x38) ^ uVar10;
                    *(ulong *)(uVar7 + 0x60) = *(ulong *)(uVar7 + 0x60) ^ uVar10;
                    *(ulong *)(uVar7 + 0x88) = *(ulong *)(uVar7 + 0x88) ^ uVar10;
                    *(ulong *)(uVar7 + 0xb0) = *(ulong *)(uVar7 + 0xb0) ^ uVar10;
                    if (uVar8 != 0x17) {
                      *(ulong *)(uVar7 + 0xd8) = *(ulong *)(uVar7 + 0xd8) ^ uVar10;
                      *(ulong *)(uVar7 + 0x40) = *(ulong *)(uVar7 + 0x40) ^ uVar11;
                      *(ulong *)(uVar7 + 0x68) = *(ulong *)(uVar7 + 0x68) ^ uVar11;
                      *(ulong *)(uVar7 + 0x90) = *(ulong *)(uVar7 + 0x90) ^ uVar11;
                      *(ulong *)(uVar7 + 0xb8) = *(ulong *)(uVar7 + 0xb8) ^ uVar11;
                      if (0x18 < uVar8) {
                        *(ulong *)(uVar7 + 0xe0) = *(ulong *)(uVar7 + 0xe0) ^ uVar11;
                        *param_1 = uVar7;
                        _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
                        _swift_slowDealloc(puVar2,0xffffffffffffffff,0xffffffffffffffff);
                        return;
                      }
                    }
                  }
                }
              }
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753a4);
              (*pcVar1)();
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753a0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006753b4);
  (*pcVar1)();
}

