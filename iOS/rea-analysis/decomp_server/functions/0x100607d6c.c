// rea decompile_all
// name: FUN_100607d6c
// address: 0x100607d6c
// body: available
// range: 0x100607d6c-0x100607f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100607d6c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0xff;
  local_a8 = param_1;
  FUN_100608530(0xff,*(undefined8 *)(*unaff_x20 + 0x78));
  lVar4 = 0;
  __sSqMa(0,lVar3);
  local_a0 = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar12 = auStack_b0 + -uVar9;
  lVar11 = (long)puVar12 - uVar9;
  lVar10 = *(long *)(lVar3 + -8);
  lStack_98 = lVar4;
  (**(code **)(lVar10 + 0x38))(lVar11,1,1,lVar3);
  uVar13 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  puVar5 = &DAT_1009de598;
  _swift_allocObject(&DAT_1009de598,0x20,7);
  *(long *)(puVar5 + 0x10) = lVar11;
  *(long **)(puVar5 + 0x18) = unaff_x20;
  puVar6 = &DAT_1009de5c0;
  _swift_allocObject(&DAT_1009de5c0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10060909c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  local_70 = FUN_100102840;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000fcdcc;
  puStack_78 = &DAT_1009de5d8;
  local_68 = puVar6;
  aBlock = __Block_copy(&local_90);
  puVar7 = local_68;
  _swift_retain();
  _swift_retain(puVar6);
  _swift_release(puVar7);
  _dispatch_sync(uVar13,aBlock);
  __Block_release(aBlock);
  puVar7 = puVar6;
  _swift_isEscapingClosureAtFileLocation(puVar6,"",0x99,0x3d,0x16,1);
  _swift_release(puVar6);
  lVar1 = lStack_98;
  lVar4 = local_a0;
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100607f70);
    (*pcVar2)();
  }
  (**(code **)(local_a0 + 0x10))(puVar12,lVar11,lStack_98);
  puVar8 = puVar12;
  (**(code **)(lVar10 + 0x30))(puVar12,1,lVar3);
  if ((int)puVar8 != 1) {
    (**(code **)(lVar10 + 0x20))(local_a8,puVar12,lVar3);
    (**(code **)(lVar4 + 8))(lVar11,lVar1);
    _swift_release(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100607f74);
  (*pcVar2)();
}

