// rea decompile_all
// name: FUN_1007994cc
// address: 0x1007994cc
// body: available
// range: 0x1007994cc-0x100799c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100799c78 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007994cc(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  cfstringStruct *pcVar12;
  void *data;
  uchar local_80 [16];
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((((uint)DAT_100b2e178 == (uint)param_1) || (DAT_100b2e178 = (byte)param_1, (uint)param_1 == 0)
      ) || ((DAT_100b2e179 & 1) != 0)) goto LAB_100799c40;
  DAT_100b2e179 = 1;
  IVar4 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar4 = objc_stub::infoDictionary(IVar4);
  lVar5 = 0;
  __dyld_get_image_header();
  DAT_100b2e180 = "macOS";
  IVar6 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  if ((IVar6 == 0) || (objc_stub::operatingSystemVersion(IVar6,local_80), local_70 == 0)) {
    pcVar12 = &cf__d__d;
  }
  else {
    pcVar12 = &cf__d__d__d;
  }
  IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,pcVar12);
  FUN_10079a080();
  pcVar11 = "hw.model";
  DAT_100b2e188 = IVar6;
  FUN_10079a0a0();
  pcVar7 = "kern.version";
  DAT_100b2e190 = pcVar11;
  FUN_10079a0a0();
  pcVar11 = "kern.osversion";
  DAT_100b2e198 = pcVar7;
  FUN_10079a0a0();
  iVar3 = 0x8d695f;
  DAT_100b2e1a0 = pcVar11;
  FUN_10079a33c("MobileSubstrate",0);
  DAT_100b2e1a8 = iVar3 != -1;
  pcVar11 = "kern.boottime";
  FUN_100741154();
  FUN_10079a114();
  uVar8 = 0;
  DAT_100b2e1b0 = pcVar11;
  _time();
  FUN_10079a114();
  DAT_100b2e1b8 = uVar8;
  FUN_10079a150();
  FUN_10079a080();
  DAT_100b2e1c0 = uVar8;
  IVar6 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_CFBundleExecutable);
  FUN_10079a080();
  DAT_100b2e1c8 = IVar6;
  IVar6 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_CFBundleIdentifier);
  FUN_10079a080();
  DAT_100b2e1d0 = IVar6;
  IVar6 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_CFBundleName);
  FUN_10079a080();
  DAT_100b2e1d8 = IVar6;
  IVar6 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_CFBundleVersion);
  FUN_10079a080();
  DAT_100b2e1e0 = IVar6;
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_CFBundleShortVersionString);
  FUN_10079a080();
  IVar6 = 0;
  DAT_100b2e1e8 = IVar4;
  FUN_10079a150();
  if (IVar6 == 0) {
LAB_100799844:
    uVar8 = 0;
  }
  else {
    _objc_retainAutorelease();
    puVar9 = (undefined8 *)objc_stub::UTF8String(IVar6);
    FUN_10079a3b0(puVar9,1);
    if (puVar9 == (undefined8 *)0x0) {
      IVar4 = objc_stub::lastPathComponent(IVar6);
      _objc_retainAutorelease();
      puVar9 = (undefined8 *)objc_stub::UTF8String(IVar4);
      FUN_10079a3b0(puVar9,0);
      if (puVar9 == (undefined8 *)0x0) goto LAB_100799844;
    }
    uVar10 = 0;
    _CFUUIDCreateFromUUIDBytes(0,*puVar9,puVar9[1]);
    uVar8 = 0;
    _CFUUIDCreateString(0,uVar10);
    _CFRelease(uVar10);
    FUN_10079a080();
  }
  iVar3 = 0x8d3ecf;
  DAT_100b2e1f0 = uVar8;
  FUN_100740aa0();
  pcVar11 = "hw.cpusubtype";
  FUN_100740aa0();
  if (iVar3 < 0x1000007) {
    if (iVar3 == 7) {
      pcVar11 = "x86";
    }
    else if (((iVar3 == 0xc) && (uVar1 = (int)pcVar11 - 6, uVar1 < 7)) &&
            ((0x79U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      pcVar11 = (&PTR_s_armv6_1009e9998)[(int)uVar1];
    }
    else {
LAB_1007998e8:
      FUN_10076bec0();
    }
  }
  else if (iVar3 == 0x1000007) {
    pcVar11 = "x86_64";
  }
  else {
    if (iVar3 != 0x100000c) goto LAB_1007998e8;
    pcVar11 = "arm64";
  }
  DAT_100b2e1f8 = pcVar11;
  uVar2 = 0x8d3ecf;
  FUN_100740aa0();
  DAT_100b2e200 = uVar2;
  uVar2 = 0x8d3d5d;
  FUN_100740aa0();
  DAT_100b2e208 = uVar2;
  DAT_100b2e210 = *(undefined4 *)(lVar5 + 4);
  DAT_100b2e218 = *(undefined4 *)(lVar5 + 8);
  IVar4 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar4 = objc_stub::FUN_1007ef640(IVar4);
  FUN_10079a080();
  DAT_100b2e220 = IVar4;
  IVar4 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar4 = objc_stub::FUN_1007ef5c0(IVar4);
  DAT_100b2e228 = (undefined4)IVar4;
  DAT_100b2e230 = _getppid();
  IVar6 = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,6);
  _objc_retainAutorelease();
  IVar4 = objc_stub::mutableBytes(IVar6);
  FUN_100741378("en0",IVar4);
  pcVar12 = &cf_hw_machine;
  FUN_10079a20c();
  IVar4 = objc_stub::dataUsingEncoding_((ID)pcVar12,4);
  objc_stub::appendData_(IVar6,IVar4);
  pcVar12 = &cf_hw_model;
  FUN_10079a20c();
  IVar4 = objc_stub::dataUsingEncoding_((ID)pcVar12,4);
  objc_stub::appendData_(IVar6,IVar4);
  IVar4 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar4 = objc_stub::FUN_1007e6160(IVar4);
  IVar4 = objc_stub::dataUsingEncoding_(IVar4,4);
  if (IVar4 != 0) {
    objc_stub::appendData_(IVar6,IVar4);
  }
  _objc_retainAutorelease();
  data = (void *)objc_stub::bytes(IVar6);
  IVar4 = objc_stub::length(IVar6);
  _CC_SHA1(data,(CC_LONG)IVar4,local_80);
  IVar4 = objc_stub::string((ID)&_OBJC_CLASS___NSMutableString);
  lVar5 = 0;
  do {
    objc_stub::appendFormat_(IVar4,&cf__02x);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x14);
  FUN_10079a080();
  DAT_100b2e238 = IVar4;
  IVar4 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar4 = objc_stub::pathForResource_ofType_(IVar4,&cf_embedded,&cf_mobileprovision);
  if (IVar4 == 0) {
    IVar4 = objc_stub::lastPathComponent(0);
    IVar4 = objc_stub::isEqualToString_(IVar4,&cf_sandboxReceipt);
    DAT_100b2e240 = "test";
    if ((int)IVar4 == 0) {
      DAT_100b2e240 = "unknown";
    }
  }
  else {
    DAT_100b2e240 = "enterprise";
  }
  pcVar11 = "hw.memsize";
  FUN_100740eac();
  param_1 = 0;
  DAT_100b2e248 = pcVar11;
LAB_100799c40:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(param_1);
  }
  return;
}

