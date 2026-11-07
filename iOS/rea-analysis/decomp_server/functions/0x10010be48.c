// rea decompile_all
// name: FUN_10010be48
// address: 0x10010be48
// body: available
// range: 0x10010be48-0x10010c037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010be48(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *self;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [16];
  byte local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  self = (undefined8 *)
         NSDistributedNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
  puVar4 = self;
  FUN_1003aa5d8();
  uVar7 = *puVar4;
  puVar5 = &DAT_100a78b30;
  FUN_100004bb4(&DAT_100a78b30,&DAT_10080d968);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar6 = PTR___sSSN_1009957f8;
  local_b8 = 0x656372756f73;
  uStack_b0 = 0xe600000000000000;
  __ss11AnyHashableVyABxcSHRzlufC
            (puVar5 + 0x20,&local_b8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  local_c0 = param_1 & 1;
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x6c6c6f72746e6f63;
  if (bVar3) {
    uVar1 = 0x6f6c6e556f747561;
  }
  *(undefined **)(puVar5 + 0x60) = puVar6;
  uVar2 = 0xea00000000006465;
  if (bVar3) {
    uVar2 = 0xea00000000006b63;
  }
  *(undefined8 *)(puVar5 + 0x48) = uVar1;
  *(undefined8 *)(puVar5 + 0x50) = uVar2;
  puVar6 = puVar5;
  FUN_1000cc410(puVar5);
  _swift_setDeallocating(puVar5);
  FUN_10010c038(puVar5 + 0x20);
  puVar5 = puVar6;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar6,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
             PTR___ss11AnyHashableVSHsWP_100995ad8);
  _swift_bridgeObjectRelease(puVar6);
  _objc_msgSend((ID)self,"postNotificationName:object:userInfo:deliverImmediately:",uVar7,0,puVar5,1
               );
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_10010c080,auStack_d0,0xd0000000000000b2,0x800000010088b7e0,0xd000000000000020,
                0x800000010088b8a0,0x24,0);
  return;
}

