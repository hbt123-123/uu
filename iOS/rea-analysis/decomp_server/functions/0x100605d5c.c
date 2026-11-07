// rea decompile_all
// name: FUN_100605d5c
// address: 0x100605d5c
// body: available
// range: 0x100605d5c-0x100605f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100605d5c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar5 = *param_2;
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar4 = auStack_80 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar4,1,1,lVar2);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  lVar2 = 0;
  __sScCMa(0,uVar6,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
  lVar7 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  lVar5 = (long)puVar4 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,lVar2);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar9 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = &DAT_1009de220;
  _swift_allocObject(&DAT_1009de220,uVar9 + lVar8,uVar3 | 7);
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  (**(code **)(lVar7 + 0x20))(puVar1 + uVar9,lVar5,lVar2);
  if (DAT_100aafef8 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_78,0,0);
  FUN_100610304(DAT_100b3a778,puVar4,FUN_100607568,puVar1);
  _swift_release();
  _swift_release(puVar1);
  FUN_1006070b4(puVar4);
  return;
}

