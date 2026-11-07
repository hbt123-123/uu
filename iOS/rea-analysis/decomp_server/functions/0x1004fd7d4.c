// rea decompile_all
// name: FUN_1004fd7d4
// address: 0x1004fd7d4
// body: available
// range: 0x1004fd7d4-0x1004fdb27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1004fd7d4(undefined1 *param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  byte *pbVar9;
  
  if (0 < unaff_x20[5]) {
    uVar8 = unaff_x20[0x13];
    if (uVar8 >> 0x3c < 0xf) {
      uVar5 = unaff_x20[0x11];
      lVar7 = unaff_x20[0x12];
      if (uVar5 >> 0x3c < 0xf) {
        FUN_100008184(lVar7,uVar8);
        __s10Foundation4DataV6appendyyACF(lVar7,uVar8);
        FUN_100006cc8(lVar7,uVar8);
      }
      else {
        lVar3 = unaff_x20[0x10];
        FUN_100008184(lVar7,uVar8);
        FUN_100006cc8(lVar3,uVar5);
        unaff_x20[0x10] = lVar7;
        unaff_x20[0x11] = uVar8;
      }
      FUN_100006cc8(unaff_x20[0x12],unaff_x20[0x13]);
      unaff_x20[0x13] = -0x1000000000000000;
      unaff_x20[0x12] = 0;
    }
    else if ((*(byte *)(unaff_x20 + 4) & 1) == 0) {
      if ((char)unaff_x20[0xe] == '\x01') {
        if (unaff_x20[3] == 0) {
          lVar7 = *unaff_x20 - unaff_x20[2];
          if (SCARRY8(unaff_x20[1],lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fdb24);
            (*pcVar2)();
          }
          *unaff_x20 = unaff_x20[2];
          unaff_x20[1] = unaff_x20[1] + lVar7;
          FUN_100505214();
          if (unaff_x21 != 0) {
            return extraout_x8_01;
          }
          if (((ulong)param_1 >> 0x20 & 1) != 0) {
            FUN_100506290();
            _swift_allocError(&DAT_1009cdf18,param_1,0,0);
            uVar4 = 1;
            goto LAB_1004fd958;
          }
          FUN_100504f64();
          unaff_x20[3] = *unaff_x20;
        }
        else {
          *unaff_x20 = unaff_x20[3];
        }
      }
      else {
        FUN_1004fdb28();
        if (unaff_x21 != 0) {
          return extraout_x8_00;
        }
        lVar7 = unaff_x20[3];
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fdb28);
          (*pcVar2)();
        }
        lVar3 = unaff_x20[2];
        FUN_1001f8534();
        if ((ulong)unaff_x20[0x11] >> 0x3c < 0xf) {
          __s10Foundation4DataV6appendyyACF(lVar3,lVar7);
          FUN_100006cdc(lVar3,lVar7);
        }
        else {
          FUN_100006cc8(unaff_x20[0x10]);
          unaff_x20[0x10] = lVar3;
          unaff_x20[0x11] = lVar7;
        }
      }
    }
  }
  uVar8 = unaff_x20[1];
  if (uVar8 == 0) {
    return 0;
  }
  pbVar9 = (byte *)*unaff_x20;
  unaff_x20[2] = (long)pbVar9;
  unaff_x20[3] = 0;
  bVar1 = *pbVar9;
  param_1 = (undefined1 *)(ulong)(bVar1 & 7);
  FUN_1005664ec();
  if (((uint)param_1 & 0xff) != 6) {
    *(char *)((long)unaff_x20 + 0x21) = (char)param_1;
    if ((char)bVar1 < '\0') {
      uVar5 = (ulong)(bVar1 >> 3 & 0xf);
      unaff_x20[5] = uVar5;
      if ((long)uVar8 < 2) goto LAB_1004fd934;
      uVar6 = (ulong)(char)pbVar9[1];
      if (-1 < (long)uVar6) {
        *unaff_x20 = (long)(pbVar9 + 2);
        unaff_x20[1] = uVar8 - 2;
        uVar5 = uVar5 | uVar6 << 4;
        goto LAB_1004fd8ec;
      }
      uVar5 = uVar5 | (uVar6 & 0x7f) << 4;
      unaff_x20[5] = uVar5;
      if (uVar8 == 2) goto LAB_1004fd934;
      bVar1 = pbVar9[2];
      uVar5 = uVar5 | (ulong)((int)(char)bVar1 & 0x7f) << 0xb;
      unaff_x20[5] = uVar5;
      if ((char)bVar1 < 0) {
        if (uVar8 < 4) goto LAB_1004fd934;
        bVar1 = pbVar9[3];
        uVar5 = uVar5 | (ulong)((int)(char)bVar1 & 0x7f) << 0x12;
        unaff_x20[5] = uVar5;
        if ((char)bVar1 < 0) {
          if ((uVar8 == 4) || (0xf < (ulong)pbVar9[4])) goto LAB_1004fd934;
          uVar5 = uVar5 | (ulong)pbVar9[4] << 0x19;
          unaff_x20[5] = uVar5;
          pbVar9 = pbVar9 + 5;
          lVar7 = uVar8 - 5;
        }
        else {
          pbVar9 = pbVar9 + 4;
          lVar7 = uVar8 - 4;
        }
      }
      else {
        pbVar9 = pbVar9 + 3;
        lVar7 = uVar8 - 3;
      }
      *unaff_x20 = (long)pbVar9;
      unaff_x20[1] = lVar7;
    }
    else {
      *unaff_x20 = (long)(pbVar9 + 1);
      if (SBORROW8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fdb20);
        (*pcVar2)();
      }
      unaff_x20[1] = uVar8 - 1;
      uVar5 = (ulong)(bVar1 >> 3);
LAB_1004fd8ec:
      unaff_x20[5] = uVar5;
    }
    if (uVar5 != 0) {
      *(undefined1 *)(unaff_x20 + 4) = 0;
      if (((uint)param_1 & 0xff) != 4) {
        return uVar5;
      }
      if (((*(byte *)(unaff_x20 + 0xc) & 1) == 0) && (unaff_x20[0xb] == uVar5)) {
        return 0;
      }
    }
  }
LAB_1004fd934:
  FUN_100506290();
  _swift_allocError(&DAT_1009cdf18,param_1,0,0);
  uVar4 = 3;
LAB_1004fd958:
  *param_1 = uVar4;
  _swift_willThrow();
  return extraout_x8;
}

