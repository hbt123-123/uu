// rea decompile_all
// name: FUN_10031a574
// address: 0x10031a574
// body: available
// range: 0x10031a574-0x10031a787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10031a574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  long lStack_78;
  undefined *local_70;
  undefined8 *puStack_68;
  
  uVar1 = 0xff;
  local_b0 = param_2;
  uStack_a8 = param_3;
  local_a0 = param_7;
  local_98 = param_8;
  FUN_100277ad0();
  puVar2 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar3 = 0xff;
  __ss6ResultO7CombineE9PublisherVMa(0xff,param_4,uVar1,puVar2);
  uVar4 = 0xff;
  local_c0 = uVar3;
  (*param_5)(0xff,param_4);
  _swift_getWitnessTable(param_6,uVar4);
  lVar5 = 0xff;
  local_d0 = param_6;
  local_80 = uVar4;
  lStack_78 = uVar1;
  local_70 = (undefined *)param_6;
  puStack_68 = puVar2;
  __s7Combine10PublishersO14SetFailureTypeVMa(0xff,&local_80);
  puVar6 = PTR___ss6ResultO7CombineE9PublisherVyxq__GAcdCMc_100995550;
  _swift_getWitnessTable(PTR___ss6ResultO7CombineE9PublisherVyxq__GAcdCMc_100995550,uVar3);
  puVar7 = PTR___s7Combine10PublishersO14SetFailureTypeVy_xq_GAA9PublisherAAMc_1009954f0;
  local_c8 = puVar6;
  _swift_getWitnessTable
            (PTR___s7Combine10PublishersO14SetFailureTypeVy_xq_GAA9PublisherAAMc_1009954f0,lVar5);
  lVar8 = 0;
  local_d8 = puVar7;
  local_80 = uVar3;
  lStack_78 = lVar5;
  local_70 = puVar6;
  puStack_68 = (undefined8 *)puVar7;
  __s7Combine10PublishersO7FlatMapVMa(0,&local_80);
  local_b8 = *(long *)(lVar8 + -8);
  puVar9 = auStack_e0 + -(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar5 + -8);
  lVar11 = (long)puVar9 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_78 = local_b0;
  local_70 = (undefined *)uStack_a8;
  local_80 = param_1;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE03setD4Type2toAA10PublishersO03SetdF0Vy_xqd__Gqd__m_ts5ErrorRd__lF
            (lVar11,uVar1,uVar4,uVar1,local_d0,puVar2);
  uVar1 = local_a0;
  local_90[0] = param_4;
  _swift_getKeyPath(local_a0,local_90);
  __s7Combine11SubscribersO6DemandV9unlimitedAEvgZ();
  __s7Combine9PublisherPAAE7flatMap13maxPublishers_AA0F0O04FlatD0Vy_qd_0_xGAA11SubscribersO6DemandV_qd_0_6OutputQzctAOQyd_0_Rsd__AaBRd_0_7FailureQyd_0_ARRtzr0_lF
            (puVar9);
  _swift_release(uVar1);
  (**(code **)(lVar10 + 8))(lVar11,lVar5);
  puVar6 = PTR___s7Combine10PublishersO7FlatMapVy_xq_GAA9PublisherAAMc_1009954f8;
  _swift_getWitnessTable
            (PTR___s7Combine10PublishersO7FlatMapVy_xq_GAA9PublisherAAMc_1009954f8,lVar8);
  lVar5 = lVar8;
  __s7Combine9PublisherPAAE010eraseToAnyB0AA0eB0Vy6OutputQz7FailureQzGyF(lVar8,puVar6);
  (**(code **)(local_b8 + 8))(puVar9,lVar8);
  return lVar5;
}

