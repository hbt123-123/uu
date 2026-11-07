// rea decompile_all
// name: FUN_1003dfa1c
// address: 0x1003dfa1c
// body: available
// range: 0x1003dfa1c-0x1003dfba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1003dfa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 auStack_70 [4];
  
  puVar1 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)auStack_70 - extraout_x8);
  _swift_retain();
  FUN_1003e22c4(param_1,param_2,param_3,param_4);
  _swift_release();
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar3 = puVar6;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,1,1,lVar2);
  FUN_10060edd8();
  _swift_beginAccess();
  uVar7 = *puVar3;
  puVar1 = &DAT_100a8ce20;
  FUN_100004bb4(&DAT_100a8ce20,&DAT_100823348);
  puVar4 = &DAT_100a759d8;
  FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
  puVar5 = puVar4;
  FUN_1003e23c0();
  FUN_100617950(uVar7,puVar6,FUN_1003e2358,0,puVar1,puVar4,puVar5);
  _swift_release(param_1);
  FUN_100040bb4(puVar6,&DAT_100a77040,&DAT_10080e910);
  return uVar7;
}

