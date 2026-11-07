// rea decompile_all
// name: FUN_10010a8c4
// address: 0x10010a8c4
// body: available
// range: 0x10010a8c4-0x10010aaf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010a8c4(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_4;
  uVar7 = param_5;
  __ss11_StringGutsV4growyySiF(0x38);
  __sSS6appendyySSF(0xd000000000000019,0x800000010088b770);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x746c75736572202c,0xea0000000000203a);
  bVar2 = (param_3 & 1) == 0;
  uVar8 = 0x65757274;
  if (bVar2) {
    uVar8 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar8,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x3a64616572685420,0xe900000000000020);
  pcVar5 = "currentThread";
  IVar3 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74(IVar3);
  uVar8 = uVar7;
  _swift_bridgeObjectRelease(pcVar5);
  __sSS6appendyySSF(uVar6,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  pcVar5 = "currentThread";
  IVar3 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74(IVar3);
  _swift_bridgeObjectRelease(uVar8);
  __sSS6appendyySSF(IVar3,pcVar5);
  _swift_bridgeObjectRelease(pcVar5);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(param_4,param_5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

