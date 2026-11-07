// rea decompile_all
// name: FUN_1005605a0
// address: 0x1005605a0
// body: available
// range: 0x1005605a0-0x100560bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1005605a0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte bVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 **local_80;
  ulong uStack_78;
  
  pppuVar6 = (undefined8 ***)*param_1;
  uVar2 = param_1[1];
  uVar1 = (ulong)pppuVar6 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  uVar16 = uVar1 * 4;
  uVar4 = param_1[2];
  if (uVar16 - (uVar4 >> 0xe) != 0) {
    uVar7 = (uint)((ulong)pppuVar6 >> 0x3b) & 1;
    if ((uVar2 & 0x1000000000000000) == 0) {
      uVar7 = 1;
    }
    uVar14 = uVar4 & 0xc;
    uVar13 = 4L << uVar7;
    uVar9 = uVar4;
    if (uVar14 == uVar13) {
      FUN_10000caa8(uVar4,pppuVar6,uVar2);
    }
    if (uVar1 <= uVar9 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005606b0);
      (*pcVar3)();
    }
    if ((uVar2 >> 0x3c & 1) == 0) {
      if ((uVar2 >> 0x3d & 1) == 0) {
        if (((ulong)pppuVar6 >> 0x3c & 1) == 0) {
          pppuVar5 = pppuVar6;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppuVar6,uVar2);
        }
        else {
          pppuVar5 = (undefined8 ***)((uVar2 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_80 = pppuVar6;
        uStack_78 = uVar2 & 0xffffffffffffff;
        pppuVar5 = &local_80;
      }
      uVar7 = (uint)*(byte *)((long)pppuVar5 + (uVar9 >> 0x10));
      if (uVar14 != uVar13) goto LAB_10056067c;
LAB_1005606d4:
      FUN_10000caa8(uVar4,pppuVar6,uVar2);
      if ((uVar2 >> 0x3c & 1) != 0) goto LAB_1005606e4;
LAB_100560680:
      uVar4 = (uVar4 & 0xffffffffffff0000) + 0x10004;
    }
    else {
      __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar9,pppuVar6,uVar2);
      uVar7 = (uint)uVar9;
      if (uVar14 == uVar13) goto LAB_1005606d4;
LAB_10056067c:
      if ((uVar2 >> 0x3c & 1) == 0) goto LAB_100560680;
LAB_1005606e4:
      if (uVar1 <= uVar4 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005607f8);
        (*pcVar3)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
    }
    param_1[2] = uVar4;
    if ((uVar7 - 0x3a & 0xff) < 0xf6) {
      if (0xf9 < (uVar7 - 0x47 & 0xff)) {
        iVar8 = 0xc9;
        goto LAB_10056074c;
      }
      if (0xf9 < (uVar7 - 0x67 & 0xff)) {
        iVar8 = 0xa9;
        goto LAB_10056074c;
      }
      lVar15 = 0;
      bVar11 = true;
    }
    else {
      iVar8 = 0xd0;
LAB_10056074c:
      bVar11 = false;
      lVar15 = ((ulong)(iVar8 + uVar7) & 0xff) << 0xc;
    }
    uVar9 = 0;
    bVar10 = 1;
    if ((bVar11) || (uVar4 >> 0xe == uVar16)) goto LAB_1005605f0;
    uVar9 = uVar4;
    if ((uVar4 & 0xc) == uVar13) {
      FUN_10000caa8();
    }
    if (uVar1 <= uVar9 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100560818);
      (*pcVar3)();
    }
    if ((uVar2 >> 0x3c & 1) == 0) {
      if ((uVar2 >> 0x3d & 1) == 0) {
        if (((ulong)pppuVar6 >> 0x3c & 1) == 0) {
          pppuVar5 = pppuVar6;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppuVar6,uVar2);
        }
        else {
          pppuVar5 = (undefined8 ***)((uVar2 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_80 = pppuVar6;
        uStack_78 = uVar2 & 0xffffffffffffff;
        pppuVar5 = &local_80;
      }
      uVar7 = (uint)*(byte *)((long)pppuVar5 + (uVar9 >> 0x10));
    }
    else {
      __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar9,pppuVar6,uVar2);
      uVar7 = (uint)uVar9;
    }
    if ((uVar4 & 0xc) == uVar13) {
      FUN_10000caa8();
      if ((uVar2 >> 0x3c & 1) != 0) goto LAB_100560844;
LAB_1005607e4:
      uVar4 = (uVar4 & 0xffffffffffff0000) + 0x10004;
    }
    else {
      if ((uVar2 >> 0x3c & 1) == 0) goto LAB_1005607e4;
LAB_100560844:
      if (uVar1 <= uVar4 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10056095c);
        (*pcVar3)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
    }
    param_1[2] = uVar4;
    if ((uVar7 - 0x3a & 0xff) < 0xf6) {
      if (0xf9 < (uVar7 - 0x47 & 0xff)) {
        iVar8 = 0xc9;
        goto LAB_1005608ac;
      }
      if (0xf9 < (uVar7 - 0x67 & 0xff)) {
        iVar8 = 0xa9;
        goto LAB_1005608ac;
      }
      lVar12 = 0;
      bVar11 = true;
    }
    else {
      iVar8 = 0xd0;
LAB_1005608ac:
      bVar11 = false;
      lVar12 = ((ulong)(iVar8 + uVar7) & 0xff) << 8;
    }
    uVar9 = 0;
    bVar10 = 1;
    if ((bVar11) || (uVar4 >> 0xe == uVar16)) goto LAB_1005605f0;
    uVar9 = uVar4;
    if ((uVar4 & 0xc) == uVar13) {
      FUN_10000caa8();
    }
    if (uVar1 <= uVar9 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10056097c);
      (*pcVar3)();
    }
    if ((uVar2 >> 0x3c & 1) == 0) {
      if ((uVar2 >> 0x3d & 1) == 0) {
        if (((ulong)pppuVar6 >> 0x3c & 1) == 0) {
          pppuVar5 = pppuVar6;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppuVar6,uVar2);
        }
        else {
          pppuVar5 = (undefined8 ***)((uVar2 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_80 = pppuVar6;
        uStack_78 = uVar2 & 0xffffffffffffff;
        pppuVar5 = &local_80;
      }
      uVar7 = (uint)*(byte *)((long)pppuVar5 + (uVar9 >> 0x10));
    }
    else {
      __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar9,pppuVar6,uVar2);
      uVar7 = (uint)uVar9;
    }
    if ((uVar4 & 0xc) == uVar13) {
      FUN_10000caa8();
      if ((uVar2 >> 0x3c & 1) != 0) goto LAB_10056098c;
LAB_100560948:
      uVar4 = (uVar4 & 0xffffffffffff0000) + 0x10004;
    }
    else {
      if ((uVar2 >> 0x3c & 1) == 0) goto LAB_100560948;
LAB_10056098c:
      if (uVar1 <= uVar4 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100560abc);
        (*pcVar3)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
    }
    param_1[2] = uVar4;
    if ((uVar7 - 0x3a & 0xff) < 0xf6) {
      if (0xf9 < (uVar7 - 0x47 & 0xff)) {
        iVar8 = 0xc9;
        goto LAB_1005609f4;
      }
      if (0xf9 < (uVar7 - 0x67 & 0xff)) {
        iVar8 = 0xa9;
        goto LAB_1005609f4;
      }
      lVar17 = 0;
      bVar11 = true;
    }
    else {
      iVar8 = 0xd0;
LAB_1005609f4:
      bVar11 = false;
      lVar17 = ((ulong)(iVar8 + uVar7) & 0xff) << 4;
    }
    uVar9 = 0;
    bVar10 = 1;
    if ((bVar11) || (uVar4 >> 0xe == uVar16)) goto LAB_1005605f0;
    uVar16 = uVar4;
    if ((uVar4 & 0xc) == uVar13) {
      FUN_10000caa8();
    }
    if (uVar1 <= uVar16 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100560adc);
      (*pcVar3)();
    }
    if ((uVar2 >> 0x3c & 1) == 0) {
      if ((uVar2 >> 0x3d & 1) == 0) {
        if (((ulong)pppuVar6 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppuVar6,uVar2);
        }
        else {
          pppuVar6 = (undefined8 ***)((uVar2 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_80 = pppuVar6;
        uStack_78 = uVar2 & 0xffffffffffffff;
        pppuVar6 = &local_80;
      }
      uVar7 = (uint)*(byte *)((long)pppuVar6 + (uVar16 >> 0x10));
    }
    else {
      __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar16,pppuVar6,uVar2);
      uVar7 = (uint)uVar16;
    }
    if ((uVar4 & 0xc) == uVar13) {
      FUN_10000caa8();
      if ((uVar2 >> 0x3c & 1) != 0) goto LAB_100560aec;
LAB_100560a8c:
      uVar4 = (uVar4 & 0xffffffffffff0000) + 0x10004;
    }
    else {
      if ((uVar2 >> 0x3c & 1) == 0) goto LAB_100560a8c;
LAB_100560aec:
      if (uVar1 <= uVar4 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100560b9c);
        (*pcVar3)();
      }
      __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
    }
    param_1[2] = uVar4;
    if ((uVar7 - 0x3a & 0xff) < 0xf6) {
      if (0xf9 < (uVar7 - 0x47 & 0xff)) {
        iVar8 = 0xc9;
        goto LAB_100560b54;
      }
      if (0xf9 < (uVar7 - 0x67 & 0xff)) {
        iVar8 = 0xa9;
        goto LAB_100560b54;
      }
      uVar9 = 0;
      bVar11 = true;
    }
    else {
      iVar8 = 0xd0;
LAB_100560b54:
      bVar11 = false;
      uVar9 = (ulong)(iVar8 + uVar7) & 0xff;
    }
    if (!bVar11) {
      bVar10 = 0;
      uVar9 = lVar12 + lVar15 + lVar17 + uVar9;
      goto LAB_1005605f0;
    }
  }
  uVar9 = 0;
  bVar10 = 1;
LAB_1005605f0:
  return uVar9 | (ulong)bVar10 << 0x20;
}

