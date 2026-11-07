// rea decompile_all
// name: FUN_1003ee1c0
// address: 0x1003ee1c0
// body: available
// range: 0x1003ee1c0-0x1003ee3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ee1c0(double param_1,double param_2,ID param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  ulong in_stack_ffffffffffffffa0;
  
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ee3c4);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ee3c8);
    (*pcVar1)();
  }
  if ((0x7fefffffffffffff < (ulong)ABS(param_1)) || (0x7fefffffffffffff < (ulong)ABS(param_2))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ee3cc);
    (*pcVar1)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ee3d0);
    (*pcVar1)();
  }
  uVar6 = 0x43e0000000000000;
  if (param_2 < 9.223372036854776e+18) {
    uVar5 = *(undefined8 *)PTR__NSDeviceRGBColorSpace_100995430;
    puVar2 = &_OBJC_CLASS___NSBitmapImageRep;
    dVar7 = param_2;
    _objc_allocWithZone();
    IVar3 = _objc_msgSend((ID)puVar2,
                          "initWithBitmapDataPlanes:pixelsWide:pixelsHigh:bitsPerSample:samplesPerPixel:hasAlpha:isPlanar:colorSpaceName:bytesPerRow:bitsPerPixel:"
                          ,0,(long)param_1,(long)param_2,8,4,1,
                          in_stack_ffffffffffffffa0 & 0xffffffffffffff00,uVar5,0,0);
    if (IVar3 == 0) {
      IVar4 = 0;
    }
    else {
      NSGraphicsContext::saveGraphicsState((ID)&_OBJC_CLASS___NSGraphicsContext,"saveGraphicsState")
      ;
      IVar4 = NSGraphicsContext::graphicsContextWithBitmapImageRep_
                        ((ID)&_OBJC_CLASS___NSGraphicsContext,"graphicsContextWithBitmapImageRep:",
                         IVar3);
      NSGraphicsContext::setCurrentContext_
                ((ID)&_OBJC_CLASS___NSGraphicsContext,"setCurrentContext:",IVar4);
      _objc_msgSend(param_3,"size");
      _objc_msgSend(param_3,"drawInRect:fromRect:operation:fraction:",0,0,param_1,param_2,0,0,uVar6,
                    dVar7,1);
      NSGraphicsContext::restoreGraphicsState
                ((ID)&_OBJC_CLASS___NSGraphicsContext,"restoreGraphicsState");
      puVar2 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      IVar4 = _objc_msgSend((ID)puVar2,"initWithSize:",param_1,param_2);
      _objc_msgSend(IVar4,"addRepresentation:",IVar3);
    }
    return IVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ee3d4);
  (*pcVar1)();
}

