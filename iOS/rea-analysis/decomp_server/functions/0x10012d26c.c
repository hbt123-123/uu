// rea decompile_all
// name: FUN_10012d26c
// address: 0x10012d26c
// body: available
// range: 0x10012d26c-0x10012d51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012d26c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *self;
  undefined8 *puVar10;
  ID IVar11;
  undefined *puVar12;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar13;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    self = (undefined8 *)
           NSNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    puVar10 = self;
    FUN_1003aa0f8();
    uVar13 = *puVar10;
    IVar11 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue,"mainQueue");
    puVar12 = &DAT_10099e640;
    _swift_allocObject(&DAT_10099e640,0x18,7);
    _swift_weakInit(puVar12 + 0x10);
    local_a0 = FUN_10012eea0;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    uStack_b8 = 0x42000000;
    local_b0 = FUN_100103828;
    puStack_a8 = &DAT_10099e658;
    puStack_98 = puVar12;
    aBlock = __Block_copy(&local_c0);
    _swift_release(puStack_98);
    IVar11 = _objc_msgSend((ID)self,"addObserverForName:object:queue:usingBlock:",uVar13,0,IVar11,
                           aBlock);
    __Block_release(aBlock);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ID *)(unaff_x20 + 0x10) = IVar11;
    _swift_unknownObjectRelease(uVar13);
    FUN_10012ec8c(&local_118);
    if (local_100 == 0) {
      if (DAT_100a73b88 != -1) {
        _swift_once(&DAT_100a73b88,FUN_10013118c);
      }
      uVar9 = DAT_100b36160;
      uVar8 = DAT_100b36158;
      uVar7 = DAT_100b36150;
      uVar6 = DAT_100b36148;
      uVar5 = DAT_100b36140;
      uVar4 = DAT_100b36138;
      uVar3 = DAT_100b36130;
      lVar2 = DAT_100b36128;
      uVar1 = DAT_100b36120;
      uVar13 = DAT_100b36118;
      puVar12 = DAT_100b36110;
      uStack_88 = DAT_100b36148;
      local_90 = DAT_100b36140;
      uStack_78 = DAT_100b36158;
      local_80 = DAT_100b36150;
      puStack_a8 = (undefined *)DAT_100b36128;
      local_b0 = (code *)DAT_100b36120;
      puStack_98 = (undefined *)DAT_100b36138;
      local_a0 = (code *)DAT_100b36130;
      uStack_b8 = DAT_100b36118;
      local_c0 = DAT_100b36110;
      local_70 = DAT_100b36160;
      FUN_1000a03e8(&local_c0,&local_170);
      local_c8 = uVar9;
      uStack_e0 = uVar6;
      local_100 = lVar2;
      local_e8 = uVar5;
      uStack_f0 = uVar4;
      local_f8 = uVar3;
      uStack_108 = uVar1;
      local_110 = uVar13;
      local_118 = puVar12;
      local_d8 = uVar7;
      uStack_d0 = uVar8;
    }
    local_170 = local_118;
    uStack_168 = local_110;
    local_160 = uStack_108;
    lStack_158 = local_100;
    local_150 = local_f8;
    uStack_148 = uStack_f0;
    local_140 = local_e8;
    uStack_138 = uStack_e0;
    local_130 = local_d8;
    uStack_128 = uStack_d0;
    local_120 = local_c8;
    local_c0 = local_118;
    uStack_b8 = local_110;
    local_b0 = (code *)uStack_108;
    puStack_a8 = (undefined *)local_100;
    local_a0 = (code *)local_f8;
    puStack_98 = (undefined *)uStack_f0;
    local_90 = local_e8;
    uStack_88 = uStack_e0;
    local_80 = local_d8;
    uStack_78 = uStack_d0;
    local_70 = local_c8;
    FUN_10012e214(&local_c0);
    FUN_10012ee48(&local_170);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_10012d8a8,0,0xd00000000000009a,0x800000010088ef70,0x29287075746573,
                  0xe700000000000000,0x27,0xb);
  }
  return;
}

