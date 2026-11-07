// rea decompile_all
// name: FUN_1003716f4
// address: 0x1003716f4
// body: available
// range: 0x1003716f4-0x1003718ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_1003716f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined *param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long local_a0 [5];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  
  lVar4 = 0;
  local_a0[0] = param_4;
  local_a0[2] = param_3;
  local_a0[4] = param_1;
  local_78 = param_2;
  local_70 = param_7;
  FUN_10035c064();
  lVar2 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)local_a0 + lVar2);
  lVar5 = 0;
  local_a0[3] = lVar4;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar5 + -8);
  lVar12 = (long)puVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_a0[1] = lVar5;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar4 + -8);
  lVar11 = lVar12 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = param_6;
  if (param_6 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10035fff4();
  }
  if (param_5 == 0) {
    _swift_bridgeObjectRetain(param_6);
  }
  else {
    _swift_bridgeObjectRetain(param_6);
    puVar6 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    local_68 = puVar7;
    _swift_bridgeObjectRetain(param_5);
    FUN_10037220c(local_a0[0],param_5,0x7a69726f68747541,0xed00006e6f697461,puVar6);
    puVar7 = local_68;
  }
  (**(code **)(lVar9 + 0x10))(lVar12,local_a0[2],local_a0[1]);
  FUN_1003713e0(lVar11,lVar12,3,puVar7);
  puVar7 = &DAT_100a887a8;
  FUN_100004bb4(&DAT_100a887a8,&DAT_10081c960);
  uVar3 = local_78;
  lVar9 = local_a0[4];
  iVar1 = *(int *)(puVar7 + 0x30);
  *puVar10 = local_a0[4];
  *(undefined8 *)((long)local_a0 + lVar2 + 8) = uVar3;
  (**(code **)(lVar5 + 0x10))((long)puVar10 + (long)iVar1,lVar11,lVar4);
  _swift_storeEnumTagMultiPayload(puVar10,local_a0[3],0);
  FUN_100008184(lVar9,uVar3);
  puVar8 = puVar10;
  FUN_100371aa0(puVar10,local_70);
  FUN_10035c694(puVar10);
  (**(code **)(lVar5 + 8))(lVar11,lVar4);
  return puVar8;
}

