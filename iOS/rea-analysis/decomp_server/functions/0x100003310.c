// rea decompile_all
// name: FUN_100003310
// address: 0x100003310
// body: available
// range: 0x100003310-0x1000039df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000039b0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000039dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

class_t * FUN_100003310(uint param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                       undefined8 param_6,uint param_7,int param_8,uint param_9,undefined4 param_10,
                       ID param_11,undefined4 *param_12)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  dispatch_queue_t pdVar3;
  cfstringStruct *pcVar4;
  ID self;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  char *pcVar8;
  class_t *self_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ID IVar13;
  double dVar14;
  double extraout_d0;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_12 != (undefined4 *)0x0) {
    *param_12 = 0x2713;
  }
  objc_stub::count(param_11);
  uVar1 = 0;
  FUN_1000039e0();
  FUN_10000286c();
  if ((uVar1 & 1) == 0) {
    FUN_100002a48(&cf_VirtualDisplayTrace_shimcreatefailedreason_privateClassesUnavailableslot__d);
    self_00 = (class_t *)0x0;
    goto LAB_100003960;
  }
  pcVar2 = &cf_CGVirtualDisplayDescriptor;
  _NSClassFromString();
  _objc_alloc_init();
  if (pcVar2 == (cfstringStruct *)0x0) {
    FUN_100002a48(&cf_VirtualDisplayTrace_shimcreatefailedreason_descriptorNilslot__d);
    self_00 = (class_t *)0x0;
    goto LAB_100003960;
  }
  if (param_8 < 2) {
    param_8 = 1;
  }
  uVar11 = param_8 + 0x750000;
  uVar1 = (ulong)(param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU)) * 3 + (ulong)uVar11;
  if (uVar1 >> 0x20 == 0) {
    uVar11 = (uint)uVar1;
  }
  pdVar3 = _dispatch_get_global_queue(0x21,0);
  objc_stub::setQueue_((ID)pcVar2,pdVar3);
  objc_stub::setName_((ID)pcVar2,param_6);
  objc_stub::setWhitePoint_((ID)pcVar2,0x3fee6a400fba8827,0x3ff0000000000000);
  objc_stub::setRedPrimary_((ID)pcVar2,0x3fdbe8ff327aa68f,0x3fcc7b80a9de8b3b);
  objc_stub::setGreenPrimary_((ID)pcVar2,0x3fd8a500d5e8d541,0x3fe6f0bf1a5ca298);
  objc_stub::setBluePrimary_((ID)pcVar2,0x3fc24e831ad2135e,0x3faf060bb2bba98f);
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  objc_stub::setMaxPixelsWide_((ID)pcVar2,(ulong)param_3);
  if ((int)param_4 < 2) {
    param_4 = 1;
  }
  objc_stub::setMaxPixelsHigh_((ID)pcVar2,(ulong)param_4);
  objc_stub::setSerialNum_((ID)pcVar2,(ulong)uVar11);
  objc_stub::setProductID_((ID)pcVar2,(ulong)(param_8 + 0x5200));
  objc_stub::setVendorID_((ID)pcVar2,0x5544);
  dVar14 = SQRT((double)(int)param_2 * (double)(int)param_2 +
                (double)(int)param_1 * (double)(int)param_1);
  if (dVar14 <= 0.0) {
    dVar14 = 0.1;
  }
  else {
    dVar17 = 220.0;
    if ((int)param_5 == 0) {
      dVar17 = 110.0;
    }
    dVar14 = ((dVar14 / dVar17) * 25.4) / dVar14;
  }
  if ((int)param_1 < 2) {
    param_1 = 1;
  }
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  objc_stub::setSizeInMillimeters_((ID)pcVar2,dVar14 * (double)param_1,dVar14 * (double)param_2);
  pcVar4 = &cf_CGVirtualDisplay;
  _NSClassFromString();
  _objc_alloc();
  self = objc_stub::initWithDescriptor_((ID)pcVar4,pcVar2);
  if (self == 0) {
    FUN_100002a48(&
                  cf_VirtualDisplayTrace_shimcreatefailedreason_displayNilslot__dproductID__userialNum__u
                 );
    self_00 = (class_t *)0x0;
    goto LAB_100003960;
  }
  IVar5 = objc_stub::count(param_11);
  if (IVar5 < 2) {
    IVar5 = 1;
  }
  IVar5 = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar5);
  pcVar2 = &cf_CGVirtualDisplayMode;
  _NSClassFromString();
  if ((int)param_7 < 2) {
    param_7 = 1;
  }
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                    (param_11,&local_150,auStack_110,0x10);
  if (IVar6 != 0) {
    lVar12 = *local_140;
    dVar14 = *(double *)PTR__CGSizeZero_100995568;
    dVar17 = *(double *)(PTR__CGSizeZero_100995568 + 8);
    do {
      IVar13 = 0;
      do {
        if (*local_140 != lVar12) {
          _objc_enumerationMutation(param_11);
        }
        IVar7 = *(ID *)(lStack_148 + IVar13 * 8);
        dVar15 = dVar14;
        dVar16 = dVar17;
        if (IVar7 != 0) {
          objc_stub::sizeValue(IVar7);
          dVar15 = extraout_d0;
        }
        uVar9 = (uint)(long)dVar15;
        if ((int)uVar9 < 2) {
          uVar9 = 1;
        }
        uVar10 = (uint)(long)dVar16;
        if ((int)uVar10 < 2) {
          uVar10 = 1;
        }
        pcVar4 = pcVar2;
        _objc_alloc();
        IVar7 = objc_stub::initWithWidth_height_refreshRate_
                          ((ID)pcVar4,(double)param_7,(ulong)uVar9,(ulong)uVar10);
        if (IVar7 != 0) {
          NSMutableArray::addObject_(IVar5,IVar7);
        }
        IVar13 = IVar13 + 1;
      } while (IVar6 != IVar13);
      IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_11,&local_150,auStack_110,0x10);
    } while (IVar6 != 0);
  }
  IVar6 = NSMutableArray::count(IVar5);
  if (IVar6 == 0) {
    _objc_alloc();
    IVar6 = objc_stub::initWithWidth_height_refreshRate_
                      ((ID)pcVar2,(double)param_7,(ulong)param_1,(ulong)param_2);
    if (IVar6 != 0) {
      NSMutableArray::addObject_(IVar5,IVar6);
    }
  }
  pcVar2 = &cf_CGVirtualDisplaySettings;
  _NSClassFromString();
  _objc_alloc_init();
  objc_stub::setHiDPI_((ID)pcVar2,param_5);
  objc_stub::setModes_((ID)pcVar2,IVar5);
  IVar6 = objc_stub::methodSignatureForSelector_((ID)pcVar2,"setRotation:");
  if ((IVar6 == 0) || (IVar13 = objc_stub::numberOfArguments(IVar6), IVar13 != 3)) {
LAB_10000380c:
    objc_stub::displayID(self);
    FUN_100003a34(&cf_VirtualDisplayTrace_shimrotationcapabilityunavailabledisplayID__u);
  }
  else {
    IVar13 = IVar6;
    _objc_retainAutorelease();
    pcVar8 = (char *)objc_stub::methodReturnType(IVar13);
    if ((*pcVar8 != 'v') || (pcVar8[1] != '\0')) goto LAB_10000380c;
    _objc_retainAutorelease();
    pcVar8 = (char *)objc_stub::getArgumentTypeAtIndex_(IVar6,2);
    if ((*pcVar8 != 'I') || (pcVar8[1] != '\0')) goto LAB_10000380c;
    objc_stub::setRotation_((ID)pcVar2,1);
    objc_stub::displayID(self);
    FUN_1000039e0(&cf_VirtualDisplayTrace_shimenablesystemrotationdisplayID__u);
  }
  IVar6 = objc_stub::applySettings_(self,pcVar2);
  if ((int)IVar6 == 0) {
    if (param_12 != (undefined4 *)0x0) {
      *param_12 = 0x2714;
    }
    objc_stub::displayID(self);
    FUN_100002a48(&
                  cf_VirtualDisplayTrace_shimcreatefailedreason_applySettingsslot__ddisplayID__uerrorCode__d
                 );
    self_00 = (class_t *)0x0;
  }
  else {
    self_00 = &objc::class_t::NRDVirtualDisplayBox;
    _objc_alloc_init();
    objc_stub::setDisplay_((ID)self_00,self);
    objc_stub::setSettings_((ID)self_00,pcVar2);
    objc_stub::setModes_((ID)self_00,IVar5);
    objc_stub::setVendorID_((ID)self_00,0x5544);
    objc_stub::setProductID_((ID)self_00,(ulong)(param_8 + 0x5200));
    objc_stub::setSerialNum_((ID)self_00,(ulong)uVar11);
    if (param_12 != (undefined4 *)0x0) {
      *param_12 = 0;
    }
    objc_stub::displayID(self);
    NSMutableArray::count(IVar5);
    FUN_1000039e0(&
                  cf_VirtualDisplayTrace_shimcreatesuccessslot__didentityGeneration__ddisplayID__uvendorID__uproductID__userialNum__umodesCount__lu
                 );
  }
LAB_100003960:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_90) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

