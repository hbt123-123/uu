// rea decompile_all
// name: FUN_100256b40
// address: 0x100256b40
// body: available
// range: 0x100256b40-0x100256f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100256b40(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_retain();
  _swift_release(uVar6);
  puVar2 = (undefined *)0x0;
  FUN_100254ee8();
  uVar6 = 0x40;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar3 = puVar2;
  _NSHomeDirectory();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  local_80 = puVar3;
  local_78 = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  __sSS6appendyySSF(0xd00000000000001b,0x80000001008a7c80);
  _swift_bridgeObjectRelease(uVar6);
  *(undefined **)(puVar2 + 0x20) = local_80;
  *(undefined8 *)(puVar2 + 0x28) = local_78;
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(puVar2 + 0x30) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(puVar2 + 0x38) = puVar3;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  _swift_release(uVar6);
  uVar6 = 0;
  FUN_10025cff0();
  _swift_allocObject();
  FUN_10025cc90();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  _swift_release(uVar5);
  uVar6 = 0;
  FUN_100258130();
  _swift_allocObject();
  FUN_100257500();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar6;
  _swift_release(uVar5);
  uVar6 = 0;
  FUN_100258de0();
  _swift_allocObject();
  FUN_1002584ec();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  _swift_release(uVar5);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f10);
    (*pcVar1)();
  }
  _swift_retain(lVar7);
  FUN_100254d18();
  _swift_release(lVar7);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f14);
    (*pcVar1)();
  }
  lVar8 = *(long *)(unaff_x20 + 0x18);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f18);
    (*pcVar1)();
  }
  _swift_retain(lVar8);
  _swift_retain(lVar7);
  FUN_100257138(lVar8,lVar7,&PTR_PTR_1009a8778);
  _swift_release(lVar7);
  _swift_release(lVar8);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f1c);
    (*pcVar1)();
  }
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f20);
    (*pcVar1)();
  }
  _swift_retain(lVar8);
  _swift_retain(lVar7);
  FUN_100257138(lVar8,lVar7,&PTR_PTR_1009a8448);
  _swift_release(lVar7);
  _swift_release(lVar8);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f24);
    (*pcVar1)();
  }
  lVar8 = *(long *)(unaff_x20 + 0x30);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f28);
    (*pcVar1)();
  }
  _swift_retain(lVar8);
  _swift_retain(lVar7);
  FUN_100257210(lVar8,lVar7);
  _swift_release(lVar7);
  _swift_release(lVar8);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if (lVar7 != 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f30);
      (*pcVar1)();
    }
    lVar8 = *(long *)(unaff_x20 + 0x28);
    if (lVar8 != 0) {
      _swift_weakAssign(lVar7 + 0x10);
      _swift_weakAssign(lVar7 + 0x18,lVar8);
      if (DAT_100a7fe98 == -1) {
        lVar7 = *(long *)(unaff_x20 + 0x30);
        lVar8 = DAT_100b363f8;
      }
      else {
        _swift_once(&DAT_100a7fe98,FUN_10025531c);
        lVar7 = *(long *)(unaff_x20 + 0x30);
        lVar8 = DAT_100b363f8;
      }
      DAT_100b363f8 = lVar8;
      if (lVar7 != 0) {
        uVar6 = *(undefined8 *)(lVar8 + 0x10);
        puVar3 = &DAT_1009a83e0;
        _swift_allocObject(&DAT_1009a83e0,0x28,7);
        *(long *)(puVar3 + 0x10) = lVar8;
        *(long *)(puVar3 + 0x18) = lVar7;
        *(undefined ***)(puVar3 + 0x20) = &PTR_PTR_1009a81d8;
        puVar2 = &DAT_1009a8408;
        _swift_allocObject(&DAT_1009a8408,0x20,7);
        *(code **)(puVar2 + 0x10) = FUN_100256028;
        *(undefined **)(puVar2 + 0x18) = puVar3;
        local_60 = FUN_1000f4ed4;
        local_80 = PTR___NSConcreteStackBlock_100995490;
        local_78 = 0x42000000;
        local_70 = FUN_1000fcdcc;
        puStack_68 = &DAT_1009a8420;
        local_58 = puVar2;
        aBlock = __Block_copy(&local_80);
        puVar4 = local_58;
        _swift_retain_n(lVar7,2);
        _swift_retain(lVar8);
        _swift_retain(puVar2);
        _swift_release(puVar4);
        _dispatch_sync(uVar6,aBlock);
        __Block_release(aBlock);
        puVar4 = puVar2;
        _swift_isEscapingClosureAtFileLocation(puVar2,"",0xbb,0x24,0x18,1);
        _swift_release(lVar7);
        _swift_release(puVar3);
        _swift_release(puVar2);
        if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f0c);
          (*pcVar1)();
        }
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f08);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f34);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100256f2c);
  (*pcVar1)();
}

