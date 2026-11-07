// rea decompile_all
// name: FUN_1006117f4
// address: 0x1006117f4
// body: available
// range: 0x1006117f4-0x1006119ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1006117f4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 auStack_80 [2];
  undefined8 local_70;
  byte local_68;
  
  lVar3 = *param_3;
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar11 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  uVar2 = lVar9 + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&local_70 - uVar2;
  lVar8 = lVar6 - uVar2;
  _swift_allocObject(lVar3,0x18,7);
  puVar1 = &DAT_100aaff08;
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  FUN_10061047c();
  *(undefined **)(lVar3 + 0x10) = puVar1;
  FUN_100607210(param_2,lVar8);
  FUN_100607210(lVar8,lVar6);
  uVar2 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar4 = uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009df648;
  _swift_allocObject(&DAT_1009df648,uVar10 + 0x18,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  FUN_100607324(lVar8,puVar1 + uVar4);
  *(long *)(puVar1 + uVar10) = lVar3;
  *(code **)(puVar1 + uVar10 + 8) = FUN_100008290;
  *(undefined8 *)((long)(puVar1 + uVar10 + 8) + 8) = 0;
  plVar5 = (long *)param_3[2];
  pcVar7 = *(code **)(*plVar5 + 0x58);
  _swift_retain_n(lVar3,2);
  (*pcVar7)(&local_70);
  if ((local_68 & 1) == 0) {
    FUN_1006070b4(lVar6);
    _swift_release(lVar3);
    FUN_100614cd0(local_70,0);
    *(code **)(lVar8 + -0x10) = FUN_100614c70;
    *(undefined **)(lVar8 + -8) = puVar1;
    (**(code **)(*plVar5 + 0x60))(FUN_100614cdc);
    _swift_release(puVar1);
  }
  else {
    FUN_100611b28(param_1,lVar6,lVar3);
    FUN_1006070b4(lVar6);
    _swift_release(puVar1);
    _swift_release(lVar3);
  }
  return lVar3;
}

