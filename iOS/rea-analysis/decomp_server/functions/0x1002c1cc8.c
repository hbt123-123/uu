// rea decompile_all
// name: FUN_1002c1cc8
// address: 0x1002c1cc8
// body: available
// range: 0x1002c1cc8-0x1002c1e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002c1cc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ID unaff_x20;
  long lVar6;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puVar2 = &DAT_100a83a30;
  FUN_100004bb4(&DAT_100a83a30,&DAT_100818318);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  local_e8 = 0xd000000000000026;
  uStack_e0 = 0x80000001008a9970;
  __ss11AnyHashableVyABxcSHRzlufC
            (puVar2 + 0x20,&local_e8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  uVar3 = 0;
  FUN_1002d4054();
  *(undefined8 *)(puVar2 + 0x60) = uVar3;
  *(undefined8 *)(puVar2 + 0x48) = param_2;
  _swift_retain(param_2);
  puVar4 = puVar2;
  FUN_100277580(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100040bb4(puVar2 + 0x20,&DAT_100a82420,&DAT_100818320);
  __s10Foundation12NotificationV4name6object8userInfoACSo18NSNotificationNamea_ypSgSDys11AnyHashableVypGSgtcfC
            (auStack_f0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,&local_70,puVar4);
  __s10Foundation12NotificationV19_bridgeToObjectiveCSo14NSNotificationCyF();
  _objc_msgSend(unaff_x20,"postNotification:",param_1);
  (**(code **)(lVar6 + 8))(auStack_f0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}

