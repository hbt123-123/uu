// rea decompile_all
// name: FUN_10060b114
// address: 0x10060b114
// body: available
// range: 0x10060b114-0x10060b2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10060b114(code *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  local_80 = param_6;
  FUN_100616300(0,*(undefined8 *)(*param_3 + 0x50));
  lVar10 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  puVar8 = auStack_78 + (-8 - (lVar7 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar6 = (long)puVar8 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_1)();
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,1,1,lVar3);
  (**(code **)(lVar10 + 0x10))(puVar8,param_4,lVar1);
  uVar5 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009de980;
  _swift_allocObject(&DAT_1009de980,uVar9 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  *(undefined8 *)(puVar4 + 0x18) = local_80;
  *(long **)(puVar4 + 0x20) = param_3;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar9,puVar8,lVar1);
  lVar1 = DAT_100aafef8;
  _swift_retain(puVar4);
  _swift_retain(param_3);
  if (lVar1 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_78,0,0);
  FUN_100614204(DAT_100b3a778,lVar6,puVar2,FUN_10060cda4,puVar4);
  _swift_release();
  _swift_release(puVar2);
  _swift_release_n(puVar4,2);
  FUN_1006070b4(lVar6);
  return;
}

