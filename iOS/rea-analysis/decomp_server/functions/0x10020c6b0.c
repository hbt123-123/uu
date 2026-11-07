// rea decompile_all
// name: FUN_10020c6b0
// address: 0x10020c6b0
// body: available
// range: 0x10020c6b0-0x10020c807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10020c6b0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_80 [16];
  undefined8 *local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar6 = *(ulong *)(param_1 + 0x28);
  uVar5 = *(ulong *)(param_1 + 0x30);
  uVar4 = uVar6 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar4 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    if (((param_3 & 1) == 0) && (*(long *)(param_2 + 0x10) != 0)) {
      uVar6 = *(ulong *)(param_2 + 0x20);
      uVar5 = *(ulong *)(param_2 + 0x28);
      uVar4 = uVar6 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar4 = uVar5 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        local_50 = 0x2f;
        uStack_48 = 0xe100000000000000;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_70 = &local_50;
        _swift_bridgeObjectRetain_n(uVar5,2);
        lVar3 = 0x7fffffffffffffff;
        FUN_10000b9ac(0x7fffffffffffffff,1,FUN_10009ff84,auStack_80,uVar6,uVar5);
        if (*(long *)(lVar3 + 0x10) == 0) {
          _swift_bridgeObjectRelease();
        }
        else {
          uVar6 = *(ulong *)(lVar3 + 0x20);
          uVar4 = *(ulong *)(lVar3 + 0x28);
          uVar1 = *(undefined8 *)(lVar3 + 0x30);
          uVar2 = *(undefined8 *)(lVar3 + 0x38);
          _swift_bridgeObjectRetain_n(uVar2,2);
          _swift_bridgeObjectRelease(lVar3);
          __sSS14_fromSubstringySSSshFZ(uVar6,uVar4,uVar1,uVar2);
          _swift_bridgeObjectRelease(uVar5);
          _swift_bridgeObjectRelease_n(uVar2,2);
          uVar5 = uVar4;
        }
        goto LAB_10020c7e0;
      }
    }
    uVar6 = 0;
    uVar5 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
  }
LAB_10020c7e0:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

