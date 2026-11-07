// rea decompile_all
// name: FUN_100614204
// address: 0x100614204
// body: available
// range: 0x100614204-0x10061447f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_100614204(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_90 [2];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  byte local_68;
  
  puVar1 = &DAT_100aaffc0;
  local_78 = param_3;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar8 = *(long *)(puVar1 + -8);
  lVar12 = *(long *)(lVar8 + 0x40);
  uVar5 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)&local_80 - uVar5;
  lVar13 = lVar11 - uVar5;
  puVar1 = &DAT_1009df878;
  _swift_allocObject(&DAT_1009df878,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  puVar2 = &DAT_100aaff00;
  local_80 = param_4;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  uVar3 = param_5;
  _swift_retain();
  FUN_10061047c();
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  FUN_100607210(param_2,lVar13);
  FUN_100607210(lVar13,lVar11);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar12 + uVar6 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009df8a0;
  _swift_allocObject(&DAT_1009df8a0,uVar9 + 0x18,uVar5 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  FUN_100607324(lVar13,puVar4 + uVar6);
  *(code **)(puVar4 + uVar9) = FUN_100102840;
  *(undefined **)((long)(puVar4 + uVar9) + 8) = puVar1;
  *(undefined **)(puVar4 + uVar9 + 0x10) = puVar2;
  plVar7 = *(long **)(local_78 + 0x10);
  pcVar10 = *(code **)(*plVar7 + 0x58);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  (*pcVar10)(&local_70);
  if ((local_68 & 1) == 0) {
    FUN_1006070b4(lVar11);
    _swift_release(puVar2);
    _swift_release(puVar1);
    FUN_100614cd0(local_70,0);
    *(code **)(lVar13 + -0x10) = FUN_100615070;
    *(undefined **)(lVar13 + -8) = puVar4;
    (**(code **)(*plVar7 + 0x60))(thunk_FUN_100614cdc);
    _swift_release(puVar1);
    _swift_release(puVar4);
  }
  else {
    _swift_retain(param_5);
    FUN_100613e50(param_1,lVar11,puVar2,local_80,param_5);
    _swift_release(param_5);
    FUN_1006070b4(lVar11);
    _swift_release(puVar4);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
  }
  return puVar2;
}

