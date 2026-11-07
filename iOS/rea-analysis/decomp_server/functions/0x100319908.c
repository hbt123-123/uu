// rea decompile_all
// name: FUN_100319908
// address: 0x100319908
// body: available
// range: 0x100319908-0x100319b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100319908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  long lStack_78;
  undefined *local_70;
  undefined8 *puStack_68;
  
  uVar1 = 0xff;
  local_98 = param_2;
  FUN_100277ad0();
  puVar2 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar3 = 0xff;
  __ss6ResultO7CombineE9PublisherVMa(0xff,param_4,uVar1,puVar2);
  uVar4 = 0xff;
  __ss6ResultOMa(0xff,param_4,uVar1,puVar2);
  uVar5 = 0xff;
  __s7Combine12AnyPublisherVMa
            (0xff,uVar4,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
  puVar6 = PTR___s7Combine12AnyPublisherVyxq_GAA0C0AAMc_100995518;
  _swift_getWitnessTable(PTR___s7Combine12AnyPublisherVyxq_GAA0C0AAMc_100995518,uVar5);
  lVar7 = 0xff;
  local_c0 = puVar6;
  local_80 = uVar5;
  lStack_78 = uVar1;
  local_70 = puVar6;
  puStack_68 = puVar2;
  __s7Combine10PublishersO14SetFailureTypeVMa(0xff,&local_80);
  puVar6 = PTR___ss6ResultO7CombineE9PublisherVyxq__GAcdCMc_100995550;
  local_a8 = uVar3;
  _swift_getWitnessTable(PTR___ss6ResultO7CombineE9PublisherVyxq__GAcdCMc_100995550,uVar3);
  puVar8 = PTR___s7Combine10PublishersO14SetFailureTypeVy_xq_GAA9PublisherAAMc_1009954f0;
  local_b0 = puVar6;
  _swift_getWitnessTable
            (PTR___s7Combine10PublishersO14SetFailureTypeVy_xq_GAA9PublisherAAMc_1009954f0,lVar7);
  lVar9 = 0;
  local_b8 = puVar8;
  local_80 = uVar3;
  lStack_78 = lVar7;
  local_70 = puVar6;
  puStack_68 = (undefined8 *)puVar8;
  __s7Combine10PublishersO7FlatMapVMa(0,&local_80);
  local_a0 = *(long *)(lVar9 + -8);
  puVar11 = auStack_d0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(long *)(lVar7 + -8);
  lVar10 = (long)puVar11 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100319508(param_1,local_98,param_3,param_4);
  local_80 = param_1;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE03setD4Type2toAA10PublishersO03SetdF0Vy_xqd__Gqd__m_ts5ErrorRd__lF
            (lVar10,uVar1,uVar5,uVar1,local_c0,puVar2);
  _swift_release(param_1);
  puVar6 = &DAT_100819d78;
  local_90[0] = param_4;
  _swift_getKeyPath(&DAT_100819d78,local_90);
  __s7Combine11SubscribersO6DemandV9unlimitedAEvgZ();
  __s7Combine9PublisherPAAE7flatMap13maxPublishers_AA0F0O04FlatD0Vy_qd_0_xGAA11SubscribersO6DemandV_qd_0_6OutputQzctAOQyd_0_Rsd__AaBRd_0_7FailureQyd_0_ARRtzr0_lF
            (puVar11);
  _swift_release(puVar6);
  (**(code **)(local_c8 + 8))(lVar10,lVar7);
  puVar6 = PTR___s7Combine10PublishersO7FlatMapVy_xq_GAA9PublisherAAMc_1009954f8;
  _swift_getWitnessTable
            (PTR___s7Combine10PublishersO7FlatMapVy_xq_GAA9PublisherAAMc_1009954f8,lVar9);
  lVar7 = lVar9;
  __s7Combine9PublisherPAAE010eraseToAnyB0AA0eB0Vy6OutputQz7FailureQzGyF(lVar9,puVar6);
  (**(code **)(local_a0 + 8))(puVar11,lVar9);
  return lVar7;
}

