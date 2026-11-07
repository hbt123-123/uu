// rea decompile_all
// name: FUN_1000aa098
// address: 0x1000aa098
// body: available
// range: 0x1000aa098-0x1000aa193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000aa098(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_70 [16];
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0x20;
  uStack_48 = 0xe100000000000000;
  local_60 = &local_50;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = 0x7fffffffffffffff;
  FUN_10000b9ac(0x7fffffffffffffff,1,FUN_1000ab850,auStack_70,param_1,param_2);
  if (1 < *(ulong *)(lVar3 + 0x10)) {
    uVar4 = *(ulong *)(lVar3 + 0x20);
    FUN_1000aa024(uVar4,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30),
                  *(undefined8 *)(lVar3 + 0x38),0x78756d74,0xe400000000000000);
    if ((uVar4 & 1) != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      uVar6 = *(undefined8 *)(lVar3 + 0x48);
      uVar1 = *(undefined8 *)(lVar3 + 0x50);
      uVar2 = *(undefined8 *)(lVar3 + 0x58);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRelease(lVar3);
      __sSS14_fromSubstringySSSshFZ(uVar5,uVar6,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1000aa17c;
    }
  }
  _swift_bridgeObjectRelease();
  uVar5 = 0;
  uVar6 = 0;
LAB_1000aa17c:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}

