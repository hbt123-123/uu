// rea decompile_all
// name: FUN_1006755f8
// address: 0x1006755f8
// body: available
// range: 0x1006755f8-0x100675ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006755f8(ulong *param_1,long param_2,ulong param_3,ulong *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((0 < param_2) || (param_3 < 2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d08);
    (*pcVar1)();
  }
  uVar8 = *param_1;
  uVar6 = *param_4;
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_1006541e0();
    uVar3 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar3 = *(ulong *)(uVar6 + 0x10);
  }
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d20);
    (*pcVar1)();
  }
  *(ulong *)(uVar6 + 0x20) = *(ulong *)(uVar6 + 0x20) ^ uVar8;
  if (param_3 < 4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d24);
    (*pcVar1)();
  }
  if (uVar3 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d28);
    (*pcVar1)();
  }
  *(ulong *)(uVar6 + 0x28) = *(ulong *)(uVar6 + 0x28) ^ param_1[1];
  if (param_3 < 6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d2c);
    (*pcVar1)();
  }
  if (uVar3 < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d30);
    (*pcVar1)();
  }
  *(ulong *)(uVar6 + 0x30) = *(ulong *)(uVar6 + 0x30) ^ param_1[2];
  if (param_3 < 8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d34);
    (*pcVar1)();
  }
  if (uVar3 == 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d38);
    (*pcVar1)();
  }
  *(ulong *)(uVar6 + 0x38) = *(ulong *)(uVar6 + 0x38) ^ param_1[3];
  if (param_3 < 10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d3c);
    (*pcVar1)();
  }
  if (uVar3 < 5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d40);
    (*pcVar1)();
  }
  *(ulong *)(uVar6 + 0x40) = *(ulong *)(uVar6 + 0x40) ^ param_1[4];
  if (param_3 < 0xc) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d44);
    (*pcVar1)();
  }
  if (uVar3 == 5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d48);
    (*pcVar1)();
  }
  *(ulong *)(uVar6 + 0x48) = *(ulong *)(uVar6 + 0x48) ^ param_1[5];
  if (param_3 < 0xe) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d4c);
    (*pcVar1)();
  }
  if (6 < uVar3) {
    *(ulong *)(uVar6 + 0x50) = *(ulong *)(uVar6 + 0x50) ^ param_1[6];
    if (param_3 < 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d54);
      (*pcVar1)();
    }
    if (uVar3 == 7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d58);
      (*pcVar1)();
    }
    *(ulong *)(uVar6 + 0x58) = *(ulong *)(uVar6 + 0x58) ^ param_1[7];
    if (param_3 < 0x12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d5c);
      (*pcVar1)();
    }
    if (uVar3 < 9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d60);
      (*pcVar1)();
    }
    *(ulong *)(uVar6 + 0x60) = *(ulong *)(uVar6 + 0x60) ^ param_1[8];
    *param_4 = uVar6;
    uVar8 = *(ulong *)(unaff_x20 + 0x18);
    if (0x48 < (long)uVar8) {
      if (param_3 < 0x14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d64);
        (*pcVar1)();
      }
      if (uVar3 == 9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d68);
        (*pcVar1)();
      }
      *(ulong *)(uVar6 + 0x68) = *(ulong *)(uVar6 + 0x68) ^ param_1[9];
      if (param_3 < 0x16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d6c);
        (*pcVar1)();
      }
      if (uVar3 < 0xb) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d70);
        (*pcVar1)();
      }
      *(ulong *)(uVar6 + 0x70) = *(ulong *)(uVar6 + 0x70) ^ param_1[10];
      if (param_3 < 0x18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d74);
        (*pcVar1)();
      }
      if (uVar3 == 0xb) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d78);
        (*pcVar1)();
      }
      *(ulong *)(uVar6 + 0x78) = *(ulong *)(uVar6 + 0x78) ^ param_1[0xb];
      if (param_3 < 0x1a) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d7c);
        (*pcVar1)();
      }
      if (uVar3 < 0xd) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d80);
        (*pcVar1)();
      }
      *(ulong *)(uVar6 + 0x80) = *(ulong *)(uVar6 + 0x80) ^ param_1[0xc];
      *param_4 = uVar6;
      if (0x68 < uVar8) {
        if (param_3 < 0x1c) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d84);
          (*pcVar1)();
        }
        if (uVar3 == 0xd) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d88);
          (*pcVar1)();
        }
        *(ulong *)(uVar6 + 0x88) = *(ulong *)(uVar6 + 0x88) ^ param_1[0xd];
        if (param_3 < 0x1e) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d8c);
          (*pcVar1)();
        }
        if (uVar3 < 0xf) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d90);
          (*pcVar1)();
        }
        *(ulong *)(uVar6 + 0x90) = *(ulong *)(uVar6 + 0x90) ^ param_1[0xe];
        if (param_3 < 0x20) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d94);
          (*pcVar1)();
        }
        if (uVar3 == 0xf) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d98);
          (*pcVar1)();
        }
        *(ulong *)(uVar6 + 0x98) = *(ulong *)(uVar6 + 0x98) ^ param_1[0xf];
        if (param_3 < 0x22) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d9c);
          (*pcVar1)();
        }
        if (uVar3 < 0x11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100675da0);
          (*pcVar1)();
        }
        *(ulong *)(uVar6 + 0xa0) = *(ulong *)(uVar6 + 0xa0) ^ param_1[0x10];
        *param_4 = uVar6;
        if (0x88 < uVar8) {
          if (param_3 < 0x24) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100675da4);
            (*pcVar1)();
          }
          if (uVar3 == 0x11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100675da8);
            (*pcVar1)();
          }
          *(ulong *)(uVar6 + 0xa8) = *(ulong *)(uVar6 + 0xa8) ^ param_1[0x11];
          *param_4 = uVar6;
          if (0x90 < uVar8) {
            if (param_3 < 0x26) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dac);
              (*pcVar1)();
            }
            if (uVar3 < 0x13) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675db0);
              (*pcVar1)();
            }
            *(ulong *)(uVar6 + 0xb0) = *(ulong *)(uVar6 + 0xb0) ^ param_1[0x12];
            if (param_3 < 0x28) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675db4);
              (*pcVar1)();
            }
            if (uVar3 == 0x13) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675db8);
              (*pcVar1)();
            }
            *(ulong *)(uVar6 + 0xb8) = *(ulong *)(uVar6 + 0xb8) ^ param_1[0x13];
            if (param_3 < 0x2a) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dbc);
              (*pcVar1)();
            }
            if (uVar3 < 0x15) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dc0);
              (*pcVar1)();
            }
            *(ulong *)(uVar6 + 0xc0) = *(ulong *)(uVar6 + 0xc0) ^ param_1[0x14];
            if (param_3 < 0x2c) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dc4);
              (*pcVar1)();
            }
            if (uVar3 == 0x15) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dc8);
              (*pcVar1)();
            }
            *(ulong *)(uVar6 + 200) = *(ulong *)(uVar6 + 200) ^ param_1[0x15];
            if (param_3 < 0x2e) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dcc);
              (*pcVar1)();
            }
            if (uVar3 < 0x17) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dd0);
              (*pcVar1)();
            }
            *(ulong *)(uVar6 + 0xd0) = *(ulong *)(uVar6 + 0xd0) ^ param_1[0x16];
            if (param_3 < 0x30) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dd4);
              (*pcVar1)();
            }
            if (uVar3 == 0x17) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675dd8);
              (*pcVar1)();
            }
            *(ulong *)(uVar6 + 0xd8) = *(ulong *)(uVar6 + 0xd8) ^ param_1[0x17];
            if (param_3 < 0x32) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ddc);
              (*pcVar1)();
            }
            if (uVar3 < 0x19) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100675de0);
              (*pcVar1)();
            }
            *(ulong *)(uVar6 + 0xe0) = *(ulong *)(uVar6 + 0xe0) ^ param_1[0x18];
            *param_4 = uVar6;
          }
        }
      }
    }
    uVar6 = 0;
    lVar7 = *(long *)(unaff_x20 + 0x10);
    while( true ) {
      FUN_10067500c(param_4);
      uVar3 = *param_4;
      if (*(ulong *)(uVar3 + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ca0);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x28);
      FUN_10067d834(uVar2,1);
      uVar8 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar8 & 1) == 0) {
        FUN_1006541e0();
      }
      uVar8 = *(ulong *)(uVar3 + 0x10);
      if (uVar8 < 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ca4);
        (*pcVar1)();
      }
      *(undefined8 *)(uVar3 + 0x28) = uVar2;
      if (uVar8 == 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ca8);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x30);
      FUN_10067d834(uVar2,0x3e);
      *(undefined8 *)(uVar3 + 0x30) = uVar2;
      if (uVar8 < 4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cac);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x38);
      FUN_10067d834(uVar2,0x1c);
      *(undefined8 *)(uVar3 + 0x38) = uVar2;
      if (uVar8 == 4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cb0);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x40);
      FUN_10067d834(uVar2,0x1b);
      *(undefined8 *)(uVar3 + 0x40) = uVar2;
      if (uVar8 < 6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cb4);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x48);
      FUN_10067d834(uVar2,0x24);
      *(undefined8 *)(uVar3 + 0x48) = uVar2;
      if (uVar8 == 6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cb8);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x50);
      FUN_10067d834(uVar2,0x2c);
      *(undefined8 *)(uVar3 + 0x50) = uVar2;
      if (uVar8 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cbc);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x58);
      FUN_10067d834(uVar2,6);
      *(undefined8 *)(uVar3 + 0x58) = uVar2;
      if (uVar8 == 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cc0);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x60);
      FUN_10067d834(uVar2,0x37);
      *(undefined8 *)(uVar3 + 0x60) = uVar2;
      if (uVar8 < 10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cc4);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x68);
      FUN_10067d834(uVar2,0x14);
      *(undefined8 *)(uVar3 + 0x68) = uVar2;
      if (uVar8 == 10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cc8);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x70);
      FUN_10067d834(uVar2,3);
      *(undefined8 *)(uVar3 + 0x70) = uVar2;
      if (uVar8 < 0xc) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ccc);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x78);
      FUN_10067d834(uVar2,10);
      *(undefined8 *)(uVar3 + 0x78) = uVar2;
      if (uVar8 == 0xc) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cd0);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x80);
      FUN_10067d834(uVar2,0x2b);
      *(undefined8 *)(uVar3 + 0x80) = uVar2;
      if (uVar8 < 0xe) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cd4);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x88);
      FUN_10067d834(uVar2,0x19);
      *(undefined8 *)(uVar3 + 0x88) = uVar2;
      if (uVar8 == 0xe) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cd8);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x90);
      FUN_10067d834(uVar2,0x27);
      *(undefined8 *)(uVar3 + 0x90) = uVar2;
      if (uVar8 < 0x10) break;
      uVar2 = *(undefined8 *)(uVar3 + 0x98);
      FUN_10067d834(uVar2,0x29);
      *(undefined8 *)(uVar3 + 0x98) = uVar2;
      if (uVar8 == 0x10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ce0);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xa0);
      FUN_10067d834(uVar2,0x2d);
      *(undefined8 *)(uVar3 + 0xa0) = uVar2;
      if (uVar8 < 0x12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ce4);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xa8);
      FUN_10067d834(uVar2,0xf);
      *(undefined8 *)(uVar3 + 0xa8) = uVar2;
      if (uVar8 == 0x12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675ce8);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xb0);
      FUN_10067d834(uVar2,0x15);
      *(undefined8 *)(uVar3 + 0xb0) = uVar2;
      if (uVar8 < 0x14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cec);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xb8);
      FUN_10067d834(uVar2,8);
      *(undefined8 *)(uVar3 + 0xb8) = uVar2;
      if (uVar8 == 0x14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cf0);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xc0);
      FUN_10067d834(uVar2,0x12);
      *(undefined8 *)(uVar3 + 0xc0) = uVar2;
      if (uVar8 < 0x16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cf4);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 200);
      FUN_10067d834(uVar2,2);
      *(undefined8 *)(uVar3 + 200) = uVar2;
      if (uVar8 == 0x16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cf8);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xd0);
      FUN_10067d834(uVar2,0x3d);
      *(undefined8 *)(uVar3 + 0xd0) = uVar2;
      if (uVar8 < 0x18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cfc);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xd8);
      FUN_10067d834(uVar2,0x38);
      *(undefined8 *)(uVar3 + 0xd8) = uVar2;
      if (uVar8 == 0x18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d00);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0xe0);
      FUN_10067d834(uVar2,0xe);
      *(undefined8 *)(uVar3 + 0xe0) = uVar2;
      *param_4 = uVar3;
      FUN_1006753d8(param_4);
      FUN_100675508(param_4);
      if (*(ulong *)(lVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d04);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(lVar7 + 0x20 + uVar6 * 8);
      uVar3 = *param_4;
      uVar8 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar8 & 1) == 0) {
        FUN_1006541e0();
        lVar4 = *(long *)(uVar3 + 0x10);
      }
      else {
        lVar4 = *(long *)(uVar3 + 0x10);
      }
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100675c84);
        (*pcVar1)();
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(uVar3 + 0x20) = *(ulong *)(uVar3 + 0x20) ^ uVar5;
      *param_4 = uVar3;
      if (uVar6 == 0x18) {
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675cdc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100675d50);
  (*pcVar1)();
}

