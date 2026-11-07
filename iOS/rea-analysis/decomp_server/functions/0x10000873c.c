// rea decompile_all
// name: FUN_10000873c
// address: 0x10000873c
// body: available
// range: 0x10000873c-0x1000089ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10000873c(ID param_1)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  __ss6HasherVABycfC(&local_e8);
  IVar2 = _objc_msgSend(param_1,"isPlanar");
  if ((int)IVar2 == 0) {
    IVar2 = param_1;
    _objc_retainAutorelease();
    IVar2 = _objc_msgSend(IVar2,"bitmapData");
    if (IVar2 == 0) {
      return;
    }
    IVar3 = _objc_msgSend(param_1,"pixelsWide");
    IVar4 = _objc_msgSend(param_1,"samplesPerPixel");
    lVar7 = IVar3 * IVar4;
    if (SUB168(SEXT816((long)IVar3) * SEXT816((long)IVar4),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000089f4);
      (*pcVar1)();
    }
    IVar3 = _objc_msgSend(param_1,"bitsPerSample");
    lVar6 = lVar7 * IVar3;
    if (SUB168(SEXT816(lVar7) * SEXT816((long)IVar3),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000089f8);
      (*pcVar1)();
    }
    lVar7 = lVar6 + 7;
    if (-1 < lVar6) {
      lVar7 = lVar6;
    }
    IVar4 = lVar7 >> 3;
    IVar3 = _objc_msgSend(param_1,"bytesPerRow");
    if (lVar6 < 8 || (long)IVar3 < (long)IVar4) {
      return;
    }
    IVar5 = _objc_msgSend(param_1,"pixelsHigh");
    if ((long)IVar5 < 1) {
      return;
    }
    IVar5 = _objc_msgSend(param_1,"pixelsHigh");
    if (IVar3 == IVar4) {
      if (SUB168(SEXT816((long)IVar4) * SEXT816((long)IVar5),8) != (long)(IVar4 * IVar5) >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000089fc);
        (*pcVar1)();
      }
      __ss6HasherV7combine5bytesySW_tF(IVar2,IVar2 + IVar4 * IVar5);
    }
    else {
      if ((long)IVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100008a00);
        (*pcVar1)();
      }
      if (IVar5 != 0) {
        IVar8 = 0;
        do {
          lVar7 = IVar8 * IVar3;
          if (SUB168(SEXT816((long)IVar8) * SEXT816((long)IVar3),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000089f0);
            (*pcVar1)();
          }
          IVar8 = IVar8 + 1;
          lVar7 = IVar2 + lVar7;
          __ss6HasherV7combine5bytesySW_tF(lVar7,lVar7 + IVar4);
        } while (IVar5 != IVar8);
      }
    }
  }
  else {
    IVar2 = _objc_msgSend(param_1,"CGImage");
    if (IVar2 == 0) {
      return;
    }
    _CGImageGetDataProvider();
    if (IVar2 == 0) {
      return;
    }
    _CGDataProviderCopyData();
    if (IVar2 == 0) {
      return;
    }
    IVar3 = IVar2;
    _CFDataGetBytePtr();
    if (IVar3 == 0) {
      return;
    }
    IVar4 = IVar2;
    _CFDataGetLength();
    if ((long)IVar4 < 1) {
      return;
    }
    _CFDataGetLength(IVar2);
    __ss6HasherV7combine5bytesySW_tF(IVar3,IVar3 + IVar2);
  }
  _objc_msgSend(param_1,"pixelsWide");
  __ss6HasherV8_combineyySuF();
  _objc_msgSend(param_1,"pixelsHigh");
  __ss6HasherV8_combineyySuF();
  uStack_78 = uStack_c0;
  local_80 = local_c8;
  uStack_68 = uStack_b0;
  uStack_70 = local_b8;
  local_60 = local_a8;
  uStack_98 = uStack_e0;
  local_a0 = local_e8;
  uStack_88 = uStack_d0;
  uStack_90 = local_d8;
  __ss6HasherV8finalizeSiyF();
  return;
}

