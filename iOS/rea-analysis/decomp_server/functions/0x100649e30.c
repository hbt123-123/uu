// rea decompile_all
// name: FUN_100649e30
// address: 0x100649e30
// body: available
// range: 0x100649e30-0x100649fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100649e30(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((param_2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
    FUN_10062958c(0,param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_100995ea0);
    local_58 = puVar3;
  }
  while( true ) {
    puVar3 = local_58;
    uVar1 = *(ulong *)(param_3 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    lVar4 = param_3;
    FUN_10003f030(param_3,uVar1);
    lVar10 = *(long *)(uVar1 - 8);
    lVar9 = *(long *)(lVar10 + 0x40);
    (**(code **)(lVar10 + 0x10))(auStack_60 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar4,uVar1);
    uVar5 = uVar1;
    __ss24UnkeyedDecodingContainerP7isAtEndSbvgTj(uVar1,uVar6);
    (**(code **)(lVar10 + 8))(auStack_60 + -(lVar9 + 0xfU & 0xfffffffffffffff0),uVar1);
    if ((uVar5 & 1) != 0) {
      FUN_100649fc8();
      return;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    FUN_1000ce034(param_3,uVar6);
    __ss24UnkeyedDecodingContainerP6decodeys6UInt64VAEmKFTj(uVar6,uVar2);
    if (unaff_x21 != 0) break;
    puVar7 = puVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar3;
    if (((ulong)puVar7 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_10062958c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
    }
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar3 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_10062958c(puVar3,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar3 + uVar1 * 8 + 0x20) = uVar6;
    local_58 = puVar3;
  }
  _swift_bridgeObjectRelease(puVar3);
  return;
}

